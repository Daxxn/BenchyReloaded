/*
 * Code generated from START.
 *
 * This file will be overwritten when reconfiguring your START project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */
#ifndef ATMEL_START_PINS_H_INCLUDED
#define ATMEL_START_PINS_H_INCLUDED

#include <port.h>

/**
 * \brief Set PWR_ON_RST pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PWR_ON_RST_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set PWR_ON_RST data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PWR_ON_RST_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(4, dir);
}

/**
 * \brief Set PWR_ON_RST input/sense configuration
 *
 * Enable/disable PWR_ON_RST digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void PWR_ON_RST_set_isc(const PORT_ISC_t isc)
{
	PORTA_pin_set_isc(4, isc);
}

/**
 * \brief Set PWR_ON_RST inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on PWR_ON_RST is inverted
 *                     false = I/O on PWR_ON_RST is not inverted
 */
static inline void PWR_ON_RST_set_inverted(const bool inverted)
{
	PORTA_pin_set_inverted(4, inverted);
}

/**
 * \brief Set PWR_ON_RST level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PWR_ON_RST_set_level(const bool level)
{
	PORTA_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on PWR_ON_RST
 *
 * Toggle the pin level
 */
static inline void PWR_ON_RST_toggle_level()
{
	PORTA_toggle_pin_level(4);
}

/**
 * \brief Get level on PWR_ON_RST
 *
 * Reads the level on a pin
 */
static inline bool PWR_ON_RST_get_level()
{
	return PORTA_get_pin_level(4);
}

/**
 * \brief Set CPU_PWR_ON pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void CPU_PWR_ON_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(5, pull_mode);
}

/**
 * \brief Set CPU_PWR_ON data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void CPU_PWR_ON_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(5, dir);
}

/**
 * \brief Set CPU_PWR_ON input/sense configuration
 *
 * Enable/disable CPU_PWR_ON digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void CPU_PWR_ON_set_isc(const PORT_ISC_t isc)
{
	PORTA_pin_set_isc(5, isc);
}

/**
 * \brief Set CPU_PWR_ON inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on CPU_PWR_ON is inverted
 *                     false = I/O on CPU_PWR_ON is not inverted
 */
static inline void CPU_PWR_ON_set_inverted(const bool inverted)
{
	PORTA_pin_set_inverted(5, inverted);
}

/**
 * \brief Set CPU_PWR_ON level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void CPU_PWR_ON_set_level(const bool level)
{
	PORTA_set_pin_level(5, level);
}

/**
 * \brief Toggle output level on CPU_PWR_ON
 *
 * Toggle the pin level
 */
static inline void CPU_PWR_ON_toggle_level()
{
	PORTA_toggle_pin_level(5);
}

/**
 * \brief Get level on CPU_PWR_ON
 *
 * Reads the level on a pin
 */
static inline bool CPU_PWR_ON_get_level()
{
	return PORTA_get_pin_level(5);
}

/**
 * \brief Set PMBUS_ALERT pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PMBUS_ALERT_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(6, pull_mode);
}

/**
 * \brief Set PMBUS_ALERT data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PMBUS_ALERT_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(6, dir);
}

/**
 * \brief Set PMBUS_ALERT input/sense configuration
 *
 * Enable/disable PMBUS_ALERT digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void PMBUS_ALERT_set_isc(const PORT_ISC_t isc)
{
	PORTA_pin_set_isc(6, isc);
}

/**
 * \brief Set PMBUS_ALERT inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on PMBUS_ALERT is inverted
 *                     false = I/O on PMBUS_ALERT is not inverted
 */
static inline void PMBUS_ALERT_set_inverted(const bool inverted)
{
	PORTA_pin_set_inverted(6, inverted);
}

/**
 * \brief Set PMBUS_ALERT level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PMBUS_ALERT_set_level(const bool level)
{
	PORTA_set_pin_level(6, level);
}

/**
 * \brief Toggle output level on PMBUS_ALERT
 *
 * Toggle the pin level
 */
static inline void PMBUS_ALERT_toggle_level()
{
	PORTA_toggle_pin_level(6);
}

/**
 * \brief Get level on PMBUS_ALERT
 *
 * Reads the level on a pin
 */
static inline bool PMBUS_ALERT_get_level()
{
	return PORTA_get_pin_level(6);
}

/**
 * \brief Set PWR_SWITCH pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PWR_SWITCH_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTA_set_pin_pull_mode(7, pull_mode);
}

/**
 * \brief Set PWR_SWITCH data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PWR_SWITCH_set_dir(const enum port_dir dir)
{
	PORTA_set_pin_dir(7, dir);
}

/**
 * \brief Set PWR_SWITCH input/sense configuration
 *
 * Enable/disable PWR_SWITCH digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void PWR_SWITCH_set_isc(const PORT_ISC_t isc)
{
	PORTA_pin_set_isc(7, isc);
}

/**
 * \brief Set PWR_SWITCH inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on PWR_SWITCH is inverted
 *                     false = I/O on PWR_SWITCH is not inverted
 */
static inline void PWR_SWITCH_set_inverted(const bool inverted)
{
	PORTA_pin_set_inverted(7, inverted);
}

/**
 * \brief Set PWR_SWITCH level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PWR_SWITCH_set_level(const bool level)
{
	PORTA_set_pin_level(7, level);
}

/**
 * \brief Toggle output level on PWR_SWITCH
 *
 * Toggle the pin level
 */
static inline void PWR_SWITCH_toggle_level()
{
	PORTA_toggle_pin_level(7);
}

/**
 * \brief Get level on PWR_SWITCH
 *
 * Reads the level on a pin
 */
static inline bool PWR_SWITCH_get_level()
{
	return PORTA_get_pin_level(7);
}

/**
 * \brief Set PB0 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PB0_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(0, pull_mode);
}

/**
 * \brief Set PB0 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PB0_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(0, dir);
}

/**
 * \brief Set PB0 input/sense configuration
 *
 * Enable/disable PB0 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void PB0_set_isc(const PORT_ISC_t isc)
{
	PORTB_pin_set_isc(0, isc);
}

/**
 * \brief Set PB0 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on PB0 is inverted
 *                     false = I/O on PB0 is not inverted
 */
static inline void PB0_set_inverted(const bool inverted)
{
	PORTB_pin_set_inverted(0, inverted);
}

/**
 * \brief Set PB0 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PB0_set_level(const bool level)
{
	PORTB_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on PB0
 *
 * Toggle the pin level
 */
static inline void PB0_toggle_level()
{
	PORTB_toggle_pin_level(0);
}

/**
 * \brief Get level on PB0
 *
 * Reads the level on a pin
 */
static inline bool PB0_get_level()
{
	return PORTB_get_pin_level(0);
}

/**
 * \brief Set PB1 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PB1_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(1, pull_mode);
}

/**
 * \brief Set PB1 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PB1_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(1, dir);
}

/**
 * \brief Set PB1 input/sense configuration
 *
 * Enable/disable PB1 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void PB1_set_isc(const PORT_ISC_t isc)
{
	PORTB_pin_set_isc(1, isc);
}

/**
 * \brief Set PB1 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on PB1 is inverted
 *                     false = I/O on PB1 is not inverted
 */
static inline void PB1_set_inverted(const bool inverted)
{
	PORTB_pin_set_inverted(1, inverted);
}

/**
 * \brief Set PB1 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PB1_set_level(const bool level)
{
	PORTB_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on PB1
 *
 * Toggle the pin level
 */
static inline void PB1_toggle_level()
{
	PORTB_toggle_pin_level(1);
}

/**
 * \brief Get level on PB1
 *
 * Reads the level on a pin
 */
static inline bool PB1_get_level()
{
	return PORTB_get_pin_level(1);
}

/**
 * \brief Set PB2 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PB2_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set PB2 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PB2_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(2, dir);
}

/**
 * \brief Set PB2 input/sense configuration
 *
 * Enable/disable PB2 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void PB2_set_isc(const PORT_ISC_t isc)
{
	PORTB_pin_set_isc(2, isc);
}

/**
 * \brief Set PB2 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on PB2 is inverted
 *                     false = I/O on PB2 is not inverted
 */
static inline void PB2_set_inverted(const bool inverted)
{
	PORTB_pin_set_inverted(2, inverted);
}

/**
 * \brief Set PB2 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PB2_set_level(const bool level)
{
	PORTB_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on PB2
 *
 * Toggle the pin level
 */
static inline void PB2_toggle_level()
{
	PORTB_toggle_pin_level(2);
}

/**
 * \brief Get level on PB2
 *
 * Reads the level on a pin
 */
static inline bool PB2_get_level()
{
	return PORTB_get_pin_level(2);
}

/**
 * \brief Set PB3 pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PB3_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set PB3 data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PB3_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(3, dir);
}

/**
 * \brief Set PB3 input/sense configuration
 *
 * Enable/disable PB3 digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void PB3_set_isc(const PORT_ISC_t isc)
{
	PORTB_pin_set_isc(3, isc);
}

/**
 * \brief Set PB3 inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on PB3 is inverted
 *                     false = I/O on PB3 is not inverted
 */
static inline void PB3_set_inverted(const bool inverted)
{
	PORTB_pin_set_inverted(3, inverted);
}

/**
 * \brief Set PB3 level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PB3_set_level(const bool level)
{
	PORTB_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on PB3
 *
 * Toggle the pin level
 */
static inline void PB3_toggle_level()
{
	PORTB_toggle_pin_level(3);
}

/**
 * \brief Get level on PB3
 *
 * Reads the level on a pin
 */
static inline bool PB3_get_level()
{
	return PORTB_get_pin_level(3);
}

/**
 * \brief Set ALL_GOOD pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void ALL_GOOD_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(4, pull_mode);
}

/**
 * \brief Set ALL_GOOD data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void ALL_GOOD_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(4, dir);
}

/**
 * \brief Set ALL_GOOD input/sense configuration
 *
 * Enable/disable ALL_GOOD digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void ALL_GOOD_set_isc(const PORT_ISC_t isc)
{
	PORTB_pin_set_isc(4, isc);
}

/**
 * \brief Set ALL_GOOD inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on ALL_GOOD is inverted
 *                     false = I/O on ALL_GOOD is not inverted
 */
static inline void ALL_GOOD_set_inverted(const bool inverted)
{
	PORTB_pin_set_inverted(4, inverted);
}

/**
 * \brief Set ALL_GOOD level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void ALL_GOOD_set_level(const bool level)
{
	PORTB_set_pin_level(4, level);
}

/**
 * \brief Toggle output level on ALL_GOOD
 *
 * Toggle the pin level
 */
static inline void ALL_GOOD_toggle_level()
{
	PORTB_toggle_pin_level(4);
}

/**
 * \brief Get level on ALL_GOOD
 *
 * Reads the level on a pin
 */
static inline bool ALL_GOOD_get_level()
{
	return PORTB_get_pin_level(4);
}

/**
 * \brief Set PERIPH_EN pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PERIPH_EN_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTB_set_pin_pull_mode(5, pull_mode);
}

/**
 * \brief Set PERIPH_EN data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PERIPH_EN_set_dir(const enum port_dir dir)
{
	PORTB_set_pin_dir(5, dir);
}

/**
 * \brief Set PERIPH_EN input/sense configuration
 *
 * Enable/disable PERIPH_EN digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void PERIPH_EN_set_isc(const PORT_ISC_t isc)
{
	PORTB_pin_set_isc(5, isc);
}

/**
 * \brief Set PERIPH_EN inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on PERIPH_EN is inverted
 *                     false = I/O on PERIPH_EN is not inverted
 */
static inline void PERIPH_EN_set_inverted(const bool inverted)
{
	PORTB_pin_set_inverted(5, inverted);
}

/**
 * \brief Set PERIPH_EN level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PERIPH_EN_set_level(const bool level)
{
	PORTB_set_pin_level(5, level);
}

/**
 * \brief Toggle output level on PERIPH_EN
 *
 * Toggle the pin level
 */
static inline void PERIPH_EN_toggle_level()
{
	PORTB_toggle_pin_level(5);
}

/**
 * \brief Get level on PERIPH_EN
 *
 * Reads the level on a pin
 */
static inline bool PERIPH_EN_get_level()
{
	return PORTB_get_pin_level(5);
}

/**
 * \brief Set PWR_ERR_IND pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void PWR_ERR_IND_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(0, pull_mode);
}

/**
 * \brief Set PWR_ERR_IND data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void PWR_ERR_IND_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(0, dir);
}

/**
 * \brief Set PWR_ERR_IND input/sense configuration
 *
 * Enable/disable PWR_ERR_IND digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void PWR_ERR_IND_set_isc(const PORT_ISC_t isc)
{
	PORTC_pin_set_isc(0, isc);
}

/**
 * \brief Set PWR_ERR_IND inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on PWR_ERR_IND is inverted
 *                     false = I/O on PWR_ERR_IND is not inverted
 */
static inline void PWR_ERR_IND_set_inverted(const bool inverted)
{
	PORTC_pin_set_inverted(0, inverted);
}

/**
 * \brief Set PWR_ERR_IND level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void PWR_ERR_IND_set_level(const bool level)
{
	PORTC_set_pin_level(0, level);
}

/**
 * \brief Toggle output level on PWR_ERR_IND
 *
 * Toggle the pin level
 */
static inline void PWR_ERR_IND_toggle_level()
{
	PORTC_toggle_pin_level(0);
}

/**
 * \brief Get level on PWR_ERR_IND
 *
 * Reads the level on a pin
 */
static inline bool PWR_ERR_IND_get_level()
{
	return PORTC_get_pin_level(0);
}

/**
 * \brief Set USB_CORE_EN pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void USB_CORE_EN_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(1, pull_mode);
}

/**
 * \brief Set USB_CORE_EN data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void USB_CORE_EN_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(1, dir);
}

/**
 * \brief Set USB_CORE_EN input/sense configuration
 *
 * Enable/disable USB_CORE_EN digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void USB_CORE_EN_set_isc(const PORT_ISC_t isc)
{
	PORTC_pin_set_isc(1, isc);
}

/**
 * \brief Set USB_CORE_EN inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on USB_CORE_EN is inverted
 *                     false = I/O on USB_CORE_EN is not inverted
 */
static inline void USB_CORE_EN_set_inverted(const bool inverted)
{
	PORTC_pin_set_inverted(1, inverted);
}

/**
 * \brief Set USB_CORE_EN level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void USB_CORE_EN_set_level(const bool level)
{
	PORTC_set_pin_level(1, level);
}

/**
 * \brief Toggle output level on USB_CORE_EN
 *
 * Toggle the pin level
 */
static inline void USB_CORE_EN_toggle_level()
{
	PORTC_toggle_pin_level(1);
}

/**
 * \brief Get level on USB_CORE_EN
 *
 * Reads the level on a pin
 */
static inline bool USB_CORE_EN_get_level()
{
	return PORTC_get_pin_level(1);
}

/**
 * \brief Set DDR_EN pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void DDR_EN_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(2, pull_mode);
}

/**
 * \brief Set DDR_EN data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void DDR_EN_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(2, dir);
}

/**
 * \brief Set DDR_EN input/sense configuration
 *
 * Enable/disable DDR_EN digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void DDR_EN_set_isc(const PORT_ISC_t isc)
{
	PORTC_pin_set_isc(2, isc);
}

/**
 * \brief Set DDR_EN inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on DDR_EN is inverted
 *                     false = I/O on DDR_EN is not inverted
 */
static inline void DDR_EN_set_inverted(const bool inverted)
{
	PORTC_pin_set_inverted(2, inverted);
}

/**
 * \brief Set DDR_EN level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void DDR_EN_set_level(const bool level)
{
	PORTC_set_pin_level(2, level);
}

/**
 * \brief Toggle output level on DDR_EN
 *
 * Toggle the pin level
 */
static inline void DDR_EN_toggle_level()
{
	PORTC_toggle_pin_level(2);
}

/**
 * \brief Get level on DDR_EN
 *
 * Reads the level on a pin
 */
static inline bool DDR_EN_get_level()
{
	return PORTC_get_pin_level(2);
}

/**
 * \brief Set VDDA_EN pull mode
 *
 * Configure pin to pull up, down or disable pull mode, supported pull
 * modes are defined by device used
 *
 * \param[in] pull_mode Pin pull mode
 */
static inline void VDDA_EN_set_pull_mode(const enum port_pull_mode pull_mode)
{
	PORTC_set_pin_pull_mode(3, pull_mode);
}

/**
 * \brief Set VDDA_EN data direction
 *
 * Select if the pin data direction is input, output or disabled.
 * If disabled state is not possible, this function throws an assert.
 *
 * \param[in] direction PORT_DIR_IN  = Data direction in
 *                      PORT_DIR_OUT = Data direction out
 *                      PORT_DIR_OFF = Disables the pin
 *                      (low power state)
 */
static inline void VDDA_EN_set_dir(const enum port_dir dir)
{
	PORTC_set_pin_dir(3, dir);
}

/**
 * \brief Set VDDA_EN input/sense configuration
 *
 * Enable/disable VDDA_EN digital input buffer and pin change interrupt,
 * select pin interrupt edge/level sensing mode
 *
 * \param[in] isc PORT_ISC_INTDISABLE_gc    = Iterrupt disabled but input buffer enabled
 *                PORT_ISC_BOTHEDGES_gc     = Sense Both Edges
 *                PORT_ISC_RISING_gc        = Sense Rising Edge
 *                PORT_ISC_FALLING_gc       = Sense Falling Edge
 *                PORT_ISC_INPUT_DISABLE_gc = Digital Input Buffer disabled
 *                PORT_ISC_LEVEL_gc         = Sense low Level
 */
static inline void VDDA_EN_set_isc(const PORT_ISC_t isc)
{
	PORTC_pin_set_isc(3, isc);
}

/**
 * \brief Set VDDA_EN inverted mode
 *
 * Enable or disable inverted I/O on a pin
 *
 * \param[in] inverted true  = I/O on VDDA_EN is inverted
 *                     false = I/O on VDDA_EN is not inverted
 */
static inline void VDDA_EN_set_inverted(const bool inverted)
{
	PORTC_pin_set_inverted(3, inverted);
}

/**
 * \brief Set VDDA_EN level
 *
 * Sets output level on a pin
 *
 * \param[in] level true  = Pin level set to "high" state
 *                  false = Pin level set to "low" state
 */
static inline void VDDA_EN_set_level(const bool level)
{
	PORTC_set_pin_level(3, level);
}

/**
 * \brief Toggle output level on VDDA_EN
 *
 * Toggle the pin level
 */
static inline void VDDA_EN_toggle_level()
{
	PORTC_toggle_pin_level(3);
}

/**
 * \brief Get level on VDDA_EN
 *
 * Reads the level on a pin
 */
static inline bool VDDA_EN_get_level()
{
	return PORTC_get_pin_level(3);
}

#endif /* ATMEL_START_PINS_H_INCLUDED */
