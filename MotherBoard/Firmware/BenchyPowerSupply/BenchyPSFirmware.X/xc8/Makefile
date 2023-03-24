
################################################################################
# Automatically-generated file. Do not edit!
################################################################################

ifdef SystemRoot
	SHELL = cmd.exe
	MK_DIR = mkdir
else
	ifeq ($(shell uname), Linux)
		MK_DIR = mkdir -p
	endif

	ifeq ($(shell uname | cut -d _ -f 1), CYGWIN)
		MK_DIR = mkdir -p
	endif

	ifeq ($(shell uname | cut -d _ -f 1), MINGW32)
		MK_DIR = mkdir -p
	endif

	ifeq ($(shell uname | cut -d _ -f 1), MINGW64)
		MK_DIR = mkdir -p
	endif
endif

# List the subdirectories for creating object files
SUB_DIRS +=  \
 \
src \
examples/src

# List the object files
OBJS +=  \
src/tca.o \
src/cpuint.o \
src/slpctrl.o \
src/bod.o \
src/wdt.o \
src/rtc.o \
src/i2c_simple_master.o \
src/clkctrl.o \
examples/src/usart_basic_example.o \
driver_isr.o \
src/usart_basic.o \
src/i2c_types.o \
main.o \
atmel_start.o \
src/i2c_master.o \
src/protected_io.o \
src/driver_init.o \
examples/src/i2c_master_example.o

OBJS_AS_ARGS +=  \
"src/tca.o" \
"src/cpuint.o" \
"src/slpctrl.o" \
"src/bod.o" \
"src/wdt.o" \
"src/rtc.o" \
"src/i2c_simple_master.o" \
"src/clkctrl.o" \
"examples/src/usart_basic_example.o" \
"driver_isr.o" \
"src/usart_basic.o" \
"src/i2c_types.o" \
"main.o" \
"atmel_start.o" \
"src/i2c_master.o" \
"src/protected_io.o" \
"src/driver_init.o" \
"examples/src/i2c_master_example.o"

# List the dependency files
DEPS := $(OBJS:%.o=%.d)

DEPS_AS_ARGS +=  \
"src/i2c_simple_master.d" \
"src/rtc.d" \
"src/wdt.d" \
"examples/src/usart_basic_example.d" \
"src/tca.d" \
"src/clkctrl.d" \
"src/cpuint.d" \
"main.d" \
"src/bod.d" \
"src/slpctrl.d" \
"src/i2c_master.d" \
"examples/src/i2c_master_example.d" \
"src/driver_init.d" \
"src/i2c_types.d" \
"src/protected_io.d" \
"driver_isr.d" \
"atmel_start.d" \
"src/usart_basic.d"

MAKEFILE_DIR := $(dir $(realpath $(firstword $(MAKEFILE_LIST))))
OUTPUT_FILE_NAME :=AtmelStart
QUOTE := "
OUTPUT_FILE_PATH +=$(OUTPUT_FILE_NAME).elf
OUTPUT_FILE_PATH_AS_ARGS +=$(OUTPUT_FILE_NAME).elf

vpath %.c ../
vpath %.s ../
vpath %.S ../

# All Target
all: $(SUB_DIRS) $(OUTPUT_FILE_PATH)

# Linker target




$(OUTPUT_FILE_PATH): $(OBJS)
	@echo Building target: $@
	@echo Invoking: AVR/xc8 Linker
	$(QUOTE)xc8-cc$(QUOTE) -o $(OUTPUT_FILE_NAME).elf $(OBJS_AS_ARGS)  -Wl,--start-group -lm -Wl,--end-group \
-Wl,-Map="$(OUTPUT_FILE_NAME).map" -Wl,--gc-sections \
-mcpu=attiny416 \
 \

	@echo Finished building target: $@

	"avr-objcopy" -O binary "$(OUTPUT_FILE_NAME).elf" "$(OUTPUT_FILE_NAME).bin"
	"avr-objcopy" -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures \
        "$(OUTPUT_FILE_NAME).elf" "$(OUTPUT_FILE_NAME).hex"
	"avr-objcopy" -j .eeprom --set-section-flags=.eeprom=alloc,load --change-section-lma \
        .eeprom=0 --no-change-warnings -O binary "$(OUTPUT_FILE_NAME).elf" \
        "$(OUTPUT_FILE_NAME).eep" || exit 0
	"avr-objdump" -h -S "$(OUTPUT_FILE_NAME).elf" > "$(OUTPUT_FILE_NAME).lss"
	"avr-size" "$(OUTPUT_FILE_NAME).elf"

# Compiler target(s)




%.o: %.c
	@echo Building file: $<
	@echo xc8 C Compiler
	$(QUOTE)xc8-cc$(QUOTE) -x c -DF_CPU=2666666 -DDEBUG -Os -ffunction-sections -g3 -Wall -c -std=gnu99 \
-mcpu=attiny416 \
    -D__tiny416__ \
-I"../config" -I"../examples/include" -I"../include" -I"../utils" -I"../utils/assembler" -I"../"  \
-MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o "$@" "$<"

	@echo Finished building: $<

%.o: %.s
	@echo Building file: $<
	@echo AVR/xc8 Assembler
	$(QUOTE)xc8-cc$(QUOTE) -x assembler-with-cpp -DF_CPU=2666666 -DDEBUG -Os -ffunction-sections -g3 -Wall -c -std=gnu99 \
-mcpu=attiny416 \
    -D__tiny416__ \
-I"../config" -I"../examples/include" -I"../include" -I"../utils" -I"../utils/assembler" -I"../"  \
-MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o "$@" "$<"

	@echo Finished building: $<

%.o: %.S
	@echo Building file: $<
	@echo XC8 Preprocessing Assembler
	$(QUOTE)xc8-cc$(QUOTE) -x assembler-with-cpp -DF_CPU=2666666 -DDEBUG -Os -ffunction-sections -g3 -Wall -c -std=gnu99 \
-mcpu=attiny416 \
    -D__tiny416__ \
-I"../config" -I"../examples/include" -I"../include" -I"../utils" -I"../utils/assembler" -I"../"  \
-MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"  -o "$@" "$<"

	@echo Finished building: $<

# Detect changes in the dependent files and recompile the respective object files.
ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(DEPS)),)
-include $(DEPS)
endif
endif

$(SUB_DIRS):
	$(MK_DIR) "$@"

clean:
	rm -f $(OBJS_AS_ARGS)
	rm -f $(OUTPUT_FILE_PATH)
	rm -f $(DEPS_AS_ARGS)
	rm -f $(OUTPUT_FILE_NAME).a $(OUTPUT_FILE_NAME).hex $(OUTPUT_FILE_NAME).bin \
        $(OUTPUT_FILE_NAME).lss $(OUTPUT_FILE_NAME).eep $(OUTPUT_FILE_NAME).map \
        $(OUTPUT_FILE_NAME).srec
