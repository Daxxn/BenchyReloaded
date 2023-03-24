#include <atmel_start.h>
#include <util/delay.h>

#define I2C_TIMEOUT 200
#define PWR_ADDR 0x6F

i2c_operations_t I2C_read_handler(void *d)
{
	transfer_descriptor_t *desc = (transfer_descriptor_t *)d;
	I2C_set_buffer((void *)desc->data, desc->size);
	// Set callback to terminate transfer and send STOP after read is complete
	I2C_set_data_complete_callback(i2c_cb_return_stop, NULL);
	return i2c_restart_read; // Send REPEATED START before read
}

/** Performs the following transfer sequence:
1. Send SLA+W, Data1
2. Send RepeatedStart, SLA+R, Read Data1, Read Data2
3. Send Stop

This transfer sequence is typically done to first write to the slave the address in
the slave to read from, thereafter to read N bytes from this address.
*/
i2c_error_t I2C_do_transfer(uint8_t adr, uint8_t *data, uint8_t size)
{
	/* timeout is used to get out of twim_release, when there is no device connected to the bus*/
	uint16_t              timeout = I2C_TIMEOUT;
	transfer_descriptor_t d       = {data, size};

	while (I2C_BUSY == I2C_open(PWR_ADDR) && --timeout)
		; // sit here until we get the bus..
	if (!timeout)
		return I2C_BUSY;

	// This callback specifies what to do after the first write operation has completed
	// The parameters to the callback are bundled together in the aggregate data type d.
	I2C_set_data_complete_callback(I2C_read_handler, &d);
	// If we get an address NACK, then try again by sending SLA+W
	I2C_set_address_nack_callback(i2c_cb_restart_write, NULL);
	// Transmit specified number of bytes
	I2C_set_buffer((void *)&adr, 1);
	// Start a Write operation
	I2C_master_operation(false);
	timeout = I2C_TIMEOUT;
	while (I2C_BUSY == I2C_close() && --timeout)
		; // sit here until finished.
	if (!timeout)
		return I2C_FAIL;

	return I2C_NOERR;
}

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	atmel_start_init();

	/* Replace with your application code */
    I2C_do_transfer()
    
    
	while (1) {
        PWR_ERR_IND_set_level(true);
        _delay_ms(200);
        PWR_ERR_IND_set_level(false);
        _delay_ms(200);
	}
}
