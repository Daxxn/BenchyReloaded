#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-Default.mk)" "nbproject/Makefile-local-Default.mk"
include nbproject/Makefile-local-Default.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=Default
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/BenchyPSFirmware.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/BenchyPSFirmware.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

ifeq ($(COMPARE_BUILD), true)
COMPARISON_BUILD=-mafrlcsj
else
COMPARISON_BUILD=
endif

ifdef SUB_IMAGE_ADDRESS

else
SUB_IMAGE_ADDRESS_COMMAND=
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=examples/src/i2c_master_example.c examples/src/usart_basic_example.c src/driver_init.c src/bod.c src/clkctrl.c src/cpuint.c src/i2c_master.c src/i2c_simple_master.c src/i2c_types.c src/protected_io.S src/rtc.c src/slpctrl.c src/tca.c src/usart_basic.c src/wdt.c main.c driver_isr.c atmel_start.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/examples/src/i2c_master_example.o ${OBJECTDIR}/examples/src/usart_basic_example.o ${OBJECTDIR}/src/driver_init.o ${OBJECTDIR}/src/bod.o ${OBJECTDIR}/src/clkctrl.o ${OBJECTDIR}/src/cpuint.o ${OBJECTDIR}/src/i2c_master.o ${OBJECTDIR}/src/i2c_simple_master.o ${OBJECTDIR}/src/i2c_types.o ${OBJECTDIR}/src/protected_io.o ${OBJECTDIR}/src/rtc.o ${OBJECTDIR}/src/slpctrl.o ${OBJECTDIR}/src/tca.o ${OBJECTDIR}/src/usart_basic.o ${OBJECTDIR}/src/wdt.o ${OBJECTDIR}/main.o ${OBJECTDIR}/driver_isr.o ${OBJECTDIR}/atmel_start.o
POSSIBLE_DEPFILES=${OBJECTDIR}/examples/src/i2c_master_example.o.d ${OBJECTDIR}/examples/src/usart_basic_example.o.d ${OBJECTDIR}/src/driver_init.o.d ${OBJECTDIR}/src/bod.o.d ${OBJECTDIR}/src/clkctrl.o.d ${OBJECTDIR}/src/cpuint.o.d ${OBJECTDIR}/src/i2c_master.o.d ${OBJECTDIR}/src/i2c_simple_master.o.d ${OBJECTDIR}/src/i2c_types.o.d ${OBJECTDIR}/src/protected_io.o.d ${OBJECTDIR}/src/rtc.o.d ${OBJECTDIR}/src/slpctrl.o.d ${OBJECTDIR}/src/tca.o.d ${OBJECTDIR}/src/usart_basic.o.d ${OBJECTDIR}/src/wdt.o.d ${OBJECTDIR}/main.o.d ${OBJECTDIR}/driver_isr.o.d ${OBJECTDIR}/atmel_start.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/examples/src/i2c_master_example.o ${OBJECTDIR}/examples/src/usart_basic_example.o ${OBJECTDIR}/src/driver_init.o ${OBJECTDIR}/src/bod.o ${OBJECTDIR}/src/clkctrl.o ${OBJECTDIR}/src/cpuint.o ${OBJECTDIR}/src/i2c_master.o ${OBJECTDIR}/src/i2c_simple_master.o ${OBJECTDIR}/src/i2c_types.o ${OBJECTDIR}/src/protected_io.o ${OBJECTDIR}/src/rtc.o ${OBJECTDIR}/src/slpctrl.o ${OBJECTDIR}/src/tca.o ${OBJECTDIR}/src/usart_basic.o ${OBJECTDIR}/src/wdt.o ${OBJECTDIR}/main.o ${OBJECTDIR}/driver_isr.o ${OBJECTDIR}/atmel_start.o

# Source Files
SOURCEFILES=examples/src/i2c_master_example.c examples/src/usart_basic_example.c src/driver_init.c src/bod.c src/clkctrl.c src/cpuint.c src/i2c_master.c src/i2c_simple_master.c src/i2c_types.c src/protected_io.S src/rtc.c src/slpctrl.c src/tca.c src/usart_basic.c src/wdt.c main.c driver_isr.c atmel_start.c



CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
ifneq ($(INFORMATION_MESSAGE), )
	@echo $(INFORMATION_MESSAGE)
endif
	${MAKE}  -f nbproject/Makefile-Default.mk ${DISTDIR}/BenchyPSFirmware.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=ATtiny416
# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/examples/src/i2c_master_example.o: examples/src/i2c_master_example.c  .generated_files/flags/Default/8518913487c48bebab921fa12599e10115b19085 .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/examples/src" 
	@${RM} ${OBJECTDIR}/examples/src/i2c_master_example.o.d 
	@${RM} ${OBJECTDIR}/examples/src/i2c_master_example.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/examples/src/i2c_master_example.o.d" -MT "${OBJECTDIR}/examples/src/i2c_master_example.o.d" -MT ${OBJECTDIR}/examples/src/i2c_master_example.o -o ${OBJECTDIR}/examples/src/i2c_master_example.o examples/src/i2c_master_example.c 
	
${OBJECTDIR}/examples/src/usart_basic_example.o: examples/src/usart_basic_example.c  .generated_files/flags/Default/d15e073d4fa87820f65a3df3f5ce12eb9ff7bff8 .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/examples/src" 
	@${RM} ${OBJECTDIR}/examples/src/usart_basic_example.o.d 
	@${RM} ${OBJECTDIR}/examples/src/usart_basic_example.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/examples/src/usart_basic_example.o.d" -MT "${OBJECTDIR}/examples/src/usart_basic_example.o.d" -MT ${OBJECTDIR}/examples/src/usart_basic_example.o -o ${OBJECTDIR}/examples/src/usart_basic_example.o examples/src/usart_basic_example.c 
	
${OBJECTDIR}/src/driver_init.o: src/driver_init.c  .generated_files/flags/Default/b690bfb008b86643d868b63dcf966b4d8809d57b .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/driver_init.o.d 
	@${RM} ${OBJECTDIR}/src/driver_init.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/src/driver_init.o.d" -MT "${OBJECTDIR}/src/driver_init.o.d" -MT ${OBJECTDIR}/src/driver_init.o -o ${OBJECTDIR}/src/driver_init.o src/driver_init.c 
	
${OBJECTDIR}/src/bod.o: src/bod.c  .generated_files/flags/Default/7f4039f69f0a7e1ee4c254ce3cde2fb3b52e407a .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/bod.o.d 
	@${RM} ${OBJECTDIR}/src/bod.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/src/bod.o.d" -MT "${OBJECTDIR}/src/bod.o.d" -MT ${OBJECTDIR}/src/bod.o -o ${OBJECTDIR}/src/bod.o src/bod.c 
	
${OBJECTDIR}/src/clkctrl.o: src/clkctrl.c  .generated_files/flags/Default/d18ccbce018f1f6e27cd3011d303bfc6c71e1763 .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/clkctrl.o.d 
	@${RM} ${OBJECTDIR}/src/clkctrl.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/src/clkctrl.o.d" -MT "${OBJECTDIR}/src/clkctrl.o.d" -MT ${OBJECTDIR}/src/clkctrl.o -o ${OBJECTDIR}/src/clkctrl.o src/clkctrl.c 
	
${OBJECTDIR}/src/cpuint.o: src/cpuint.c  .generated_files/flags/Default/84f0472566c536b18a71f8eaab937a24a15f3f23 .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/cpuint.o.d 
	@${RM} ${OBJECTDIR}/src/cpuint.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/src/cpuint.o.d" -MT "${OBJECTDIR}/src/cpuint.o.d" -MT ${OBJECTDIR}/src/cpuint.o -o ${OBJECTDIR}/src/cpuint.o src/cpuint.c 
	
${OBJECTDIR}/src/i2c_master.o: src/i2c_master.c  .generated_files/flags/Default/7d1e31f1eff03f7b03908eb8c65f7fe0b71937c7 .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/i2c_master.o.d 
	@${RM} ${OBJECTDIR}/src/i2c_master.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/src/i2c_master.o.d" -MT "${OBJECTDIR}/src/i2c_master.o.d" -MT ${OBJECTDIR}/src/i2c_master.o -o ${OBJECTDIR}/src/i2c_master.o src/i2c_master.c 
	
${OBJECTDIR}/src/i2c_simple_master.o: src/i2c_simple_master.c  .generated_files/flags/Default/ac5ddf4e8d16de6f8ea5a062f46895a29ba09c69 .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/i2c_simple_master.o.d 
	@${RM} ${OBJECTDIR}/src/i2c_simple_master.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/src/i2c_simple_master.o.d" -MT "${OBJECTDIR}/src/i2c_simple_master.o.d" -MT ${OBJECTDIR}/src/i2c_simple_master.o -o ${OBJECTDIR}/src/i2c_simple_master.o src/i2c_simple_master.c 
	
${OBJECTDIR}/src/i2c_types.o: src/i2c_types.c  .generated_files/flags/Default/74b77c991b0e7e7787819f8c2d65aa8357f5fbf5 .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/i2c_types.o.d 
	@${RM} ${OBJECTDIR}/src/i2c_types.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/src/i2c_types.o.d" -MT "${OBJECTDIR}/src/i2c_types.o.d" -MT ${OBJECTDIR}/src/i2c_types.o -o ${OBJECTDIR}/src/i2c_types.o src/i2c_types.c 
	
${OBJECTDIR}/src/rtc.o: src/rtc.c  .generated_files/flags/Default/d794c264992a90e5ae217516b113de05b7f559db .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/rtc.o.d 
	@${RM} ${OBJECTDIR}/src/rtc.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/src/rtc.o.d" -MT "${OBJECTDIR}/src/rtc.o.d" -MT ${OBJECTDIR}/src/rtc.o -o ${OBJECTDIR}/src/rtc.o src/rtc.c 
	
${OBJECTDIR}/src/slpctrl.o: src/slpctrl.c  .generated_files/flags/Default/f62c25e99a43ff33a61c8442dc38cdfbcad4b12c .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/slpctrl.o.d 
	@${RM} ${OBJECTDIR}/src/slpctrl.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/src/slpctrl.o.d" -MT "${OBJECTDIR}/src/slpctrl.o.d" -MT ${OBJECTDIR}/src/slpctrl.o -o ${OBJECTDIR}/src/slpctrl.o src/slpctrl.c 
	
${OBJECTDIR}/src/tca.o: src/tca.c  .generated_files/flags/Default/76e565c9b9c393d77d1a85ec4c6c0700c8312ef .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/tca.o.d 
	@${RM} ${OBJECTDIR}/src/tca.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/src/tca.o.d" -MT "${OBJECTDIR}/src/tca.o.d" -MT ${OBJECTDIR}/src/tca.o -o ${OBJECTDIR}/src/tca.o src/tca.c 
	
${OBJECTDIR}/src/usart_basic.o: src/usart_basic.c  .generated_files/flags/Default/3551c304e91f9cb2f09223a272f0549364229124 .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/usart_basic.o.d 
	@${RM} ${OBJECTDIR}/src/usart_basic.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/src/usart_basic.o.d" -MT "${OBJECTDIR}/src/usart_basic.o.d" -MT ${OBJECTDIR}/src/usart_basic.o -o ${OBJECTDIR}/src/usart_basic.o src/usart_basic.c 
	
${OBJECTDIR}/src/wdt.o: src/wdt.c  .generated_files/flags/Default/64930b0ff4ef381a4f849185be8bff790fbfde3d .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/wdt.o.d 
	@${RM} ${OBJECTDIR}/src/wdt.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/src/wdt.o.d" -MT "${OBJECTDIR}/src/wdt.o.d" -MT ${OBJECTDIR}/src/wdt.o -o ${OBJECTDIR}/src/wdt.o src/wdt.c 
	
${OBJECTDIR}/main.o: main.c  .generated_files/flags/Default/126efe01bf2300e6700876f4b6e814498af14351 .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/main.o.d 
	@${RM} ${OBJECTDIR}/main.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/main.o.d" -MT "${OBJECTDIR}/main.o.d" -MT ${OBJECTDIR}/main.o -o ${OBJECTDIR}/main.o main.c 
	
${OBJECTDIR}/driver_isr.o: driver_isr.c  .generated_files/flags/Default/42ca91ea2c703e9027b0e2606f992032fd08f99e .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/driver_isr.o.d 
	@${RM} ${OBJECTDIR}/driver_isr.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/driver_isr.o.d" -MT "${OBJECTDIR}/driver_isr.o.d" -MT ${OBJECTDIR}/driver_isr.o -o ${OBJECTDIR}/driver_isr.o driver_isr.c 
	
${OBJECTDIR}/atmel_start.o: atmel_start.c  .generated_files/flags/Default/6403febf195c22d44e9175f561aec300cf9cf13f .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/atmel_start.o.d 
	@${RM} ${OBJECTDIR}/atmel_start.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/atmel_start.o.d" -MT "${OBJECTDIR}/atmel_start.o.d" -MT ${OBJECTDIR}/atmel_start.o -o ${OBJECTDIR}/atmel_start.o atmel_start.c 
	
else
${OBJECTDIR}/examples/src/i2c_master_example.o: examples/src/i2c_master_example.c  .generated_files/flags/Default/dc42e0f8bf8fc6a7542a1a8404ec5f76b5a0e0a6 .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/examples/src" 
	@${RM} ${OBJECTDIR}/examples/src/i2c_master_example.o.d 
	@${RM} ${OBJECTDIR}/examples/src/i2c_master_example.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/examples/src/i2c_master_example.o.d" -MT "${OBJECTDIR}/examples/src/i2c_master_example.o.d" -MT ${OBJECTDIR}/examples/src/i2c_master_example.o -o ${OBJECTDIR}/examples/src/i2c_master_example.o examples/src/i2c_master_example.c 
	
${OBJECTDIR}/examples/src/usart_basic_example.o: examples/src/usart_basic_example.c  .generated_files/flags/Default/c2162ee91bdb75343509d140a1588558ca4a604c .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/examples/src" 
	@${RM} ${OBJECTDIR}/examples/src/usart_basic_example.o.d 
	@${RM} ${OBJECTDIR}/examples/src/usart_basic_example.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/examples/src/usart_basic_example.o.d" -MT "${OBJECTDIR}/examples/src/usart_basic_example.o.d" -MT ${OBJECTDIR}/examples/src/usart_basic_example.o -o ${OBJECTDIR}/examples/src/usart_basic_example.o examples/src/usart_basic_example.c 
	
${OBJECTDIR}/src/driver_init.o: src/driver_init.c  .generated_files/flags/Default/bd2283f70ed214cd07cf6957dcb0b22ed6052d05 .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/driver_init.o.d 
	@${RM} ${OBJECTDIR}/src/driver_init.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/src/driver_init.o.d" -MT "${OBJECTDIR}/src/driver_init.o.d" -MT ${OBJECTDIR}/src/driver_init.o -o ${OBJECTDIR}/src/driver_init.o src/driver_init.c 
	
${OBJECTDIR}/src/bod.o: src/bod.c  .generated_files/flags/Default/4d784ecfa9cf7b53a93926388752156a141d4d22 .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/bod.o.d 
	@${RM} ${OBJECTDIR}/src/bod.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/src/bod.o.d" -MT "${OBJECTDIR}/src/bod.o.d" -MT ${OBJECTDIR}/src/bod.o -o ${OBJECTDIR}/src/bod.o src/bod.c 
	
${OBJECTDIR}/src/clkctrl.o: src/clkctrl.c  .generated_files/flags/Default/c8cb9a7e8daee8504320ae0bf9c2b8866b10473 .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/clkctrl.o.d 
	@${RM} ${OBJECTDIR}/src/clkctrl.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/src/clkctrl.o.d" -MT "${OBJECTDIR}/src/clkctrl.o.d" -MT ${OBJECTDIR}/src/clkctrl.o -o ${OBJECTDIR}/src/clkctrl.o src/clkctrl.c 
	
${OBJECTDIR}/src/cpuint.o: src/cpuint.c  .generated_files/flags/Default/26f24a9787ef722561bf368fcc80ac9038240529 .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/cpuint.o.d 
	@${RM} ${OBJECTDIR}/src/cpuint.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/src/cpuint.o.d" -MT "${OBJECTDIR}/src/cpuint.o.d" -MT ${OBJECTDIR}/src/cpuint.o -o ${OBJECTDIR}/src/cpuint.o src/cpuint.c 
	
${OBJECTDIR}/src/i2c_master.o: src/i2c_master.c  .generated_files/flags/Default/272c7079f4af0869e25c3e3f1ae529efadf25364 .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/i2c_master.o.d 
	@${RM} ${OBJECTDIR}/src/i2c_master.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/src/i2c_master.o.d" -MT "${OBJECTDIR}/src/i2c_master.o.d" -MT ${OBJECTDIR}/src/i2c_master.o -o ${OBJECTDIR}/src/i2c_master.o src/i2c_master.c 
	
${OBJECTDIR}/src/i2c_simple_master.o: src/i2c_simple_master.c  .generated_files/flags/Default/a827149a9bbd0b2a837c46ec700d48c22cb0386c .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/i2c_simple_master.o.d 
	@${RM} ${OBJECTDIR}/src/i2c_simple_master.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/src/i2c_simple_master.o.d" -MT "${OBJECTDIR}/src/i2c_simple_master.o.d" -MT ${OBJECTDIR}/src/i2c_simple_master.o -o ${OBJECTDIR}/src/i2c_simple_master.o src/i2c_simple_master.c 
	
${OBJECTDIR}/src/i2c_types.o: src/i2c_types.c  .generated_files/flags/Default/4638f2efcf4c0081eba42ede819302abffee1e21 .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/i2c_types.o.d 
	@${RM} ${OBJECTDIR}/src/i2c_types.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/src/i2c_types.o.d" -MT "${OBJECTDIR}/src/i2c_types.o.d" -MT ${OBJECTDIR}/src/i2c_types.o -o ${OBJECTDIR}/src/i2c_types.o src/i2c_types.c 
	
${OBJECTDIR}/src/rtc.o: src/rtc.c  .generated_files/flags/Default/ad302f16dcf4b24bed5ccb841f48f62e9be69f7b .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/rtc.o.d 
	@${RM} ${OBJECTDIR}/src/rtc.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/src/rtc.o.d" -MT "${OBJECTDIR}/src/rtc.o.d" -MT ${OBJECTDIR}/src/rtc.o -o ${OBJECTDIR}/src/rtc.o src/rtc.c 
	
${OBJECTDIR}/src/slpctrl.o: src/slpctrl.c  .generated_files/flags/Default/51cdd3a1d9cc67d344cfa0b1124e2fe5bcb26cb9 .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/slpctrl.o.d 
	@${RM} ${OBJECTDIR}/src/slpctrl.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/src/slpctrl.o.d" -MT "${OBJECTDIR}/src/slpctrl.o.d" -MT ${OBJECTDIR}/src/slpctrl.o -o ${OBJECTDIR}/src/slpctrl.o src/slpctrl.c 
	
${OBJECTDIR}/src/tca.o: src/tca.c  .generated_files/flags/Default/c6a382729d18f8ac74d8d4bc0fd98eedcdded1bb .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/tca.o.d 
	@${RM} ${OBJECTDIR}/src/tca.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/src/tca.o.d" -MT "${OBJECTDIR}/src/tca.o.d" -MT ${OBJECTDIR}/src/tca.o -o ${OBJECTDIR}/src/tca.o src/tca.c 
	
${OBJECTDIR}/src/usart_basic.o: src/usart_basic.c  .generated_files/flags/Default/41cc5903155dc4e290bd15d0bb9a50b2de7d96af .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/usart_basic.o.d 
	@${RM} ${OBJECTDIR}/src/usart_basic.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/src/usart_basic.o.d" -MT "${OBJECTDIR}/src/usart_basic.o.d" -MT ${OBJECTDIR}/src/usart_basic.o -o ${OBJECTDIR}/src/usart_basic.o src/usart_basic.c 
	
${OBJECTDIR}/src/wdt.o: src/wdt.c  .generated_files/flags/Default/17d9b9d79190561e14225c149cd44eba6fb02755 .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/wdt.o.d 
	@${RM} ${OBJECTDIR}/src/wdt.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/src/wdt.o.d" -MT "${OBJECTDIR}/src/wdt.o.d" -MT ${OBJECTDIR}/src/wdt.o -o ${OBJECTDIR}/src/wdt.o src/wdt.c 
	
${OBJECTDIR}/main.o: main.c  .generated_files/flags/Default/8db659f4abc921a2cca78266eb980592b58bf093 .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/main.o.d 
	@${RM} ${OBJECTDIR}/main.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/main.o.d" -MT "${OBJECTDIR}/main.o.d" -MT ${OBJECTDIR}/main.o -o ${OBJECTDIR}/main.o main.c 
	
${OBJECTDIR}/driver_isr.o: driver_isr.c  .generated_files/flags/Default/6320c5ff4ddd44f93cdfb7673e4f22e49e19ce97 .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/driver_isr.o.d 
	@${RM} ${OBJECTDIR}/driver_isr.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/driver_isr.o.d" -MT "${OBJECTDIR}/driver_isr.o.d" -MT ${OBJECTDIR}/driver_isr.o -o ${OBJECTDIR}/driver_isr.o driver_isr.c 
	
${OBJECTDIR}/atmel_start.o: atmel_start.c  .generated_files/flags/Default/5dd4f47a8c824518a608d5cfea94ac26784363cb .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}" 
	@${RM} ${OBJECTDIR}/atmel_start.o.d 
	@${RM} ${OBJECTDIR}/atmel_start.o 
	${MP_CC} $(MP_EXTRA_CC_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -c  -x c -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  $(COMPARISON_BUILD)  -gdwarf-3 -std=gnu99 -std=gnu99     -MD -MP -MF "${OBJECTDIR}/atmel_start.o.d" -MT "${OBJECTDIR}/atmel_start.o.d" -MT ${OBJECTDIR}/atmel_start.o -o ${OBJECTDIR}/atmel_start.o atmel_start.c 
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assembleWithPreprocess
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/src/protected_io.o: src/protected_io.S  .generated_files/flags/Default/97867cddb42a3239fad08f490f5d512ae5cb7f74 .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/protected_io.o.d 
	@${RM} ${OBJECTDIR}/src/protected_io.o 
	${MP_CC} -c $(MP_EXTRA_AS_PRE) -mcpu=$(MP_PROCESSOR_OPTION)  -D__DEBUG=1 -g -DDEBUG  -gdwarf-2  -x assembler-with-cpp -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  -std=gnu99 -gdwarf-3 -Wa,--defsym=__MPLAB_BUILD=1,--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1 -std=gnu99   -MD -MP -MF "${OBJECTDIR}/src/protected_io.o.d" -MT "${OBJECTDIR}/src/protected_io.o.d" -MT ${OBJECTDIR}/src/protected_io.o -o ${OBJECTDIR}/src/protected_io.o  src/protected_io.S 
	
else
${OBJECTDIR}/src/protected_io.o: src/protected_io.S  .generated_files/flags/Default/e222d9b91f12aabbdcaac5770d7ab56b82deeed3 .generated_files/flags/Default/68e2af56f03f24f52263f7835e98d99a07eb9843
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/protected_io.o.d 
	@${RM} ${OBJECTDIR}/src/protected_io.o 
	${MP_CC} -c $(MP_EXTRA_AS_PRE) -mcpu=$(MP_PROCESSOR_OPTION)  -x assembler-with-cpp -D__$(MP_PROCESSOR_OPTION)__    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -DXPRJ_Default=$(CND_CONF)  -std=gnu99 -gdwarf-3 -Wa,--defsym=__MPLAB_BUILD=1 -std=gnu99   -MD -MP -MF "${OBJECTDIR}/src/protected_io.o.d" -MT "${OBJECTDIR}/src/protected_io.o.d" -MT ${OBJECTDIR}/src/protected_io.o -o ${OBJECTDIR}/src/protected_io.o  src/protected_io.S 
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${DISTDIR}/BenchyPSFirmware.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -Wl,-Map=${DISTDIR}/BenchyPSFirmware.X.${IMAGE_TYPE}.map  -D__DEBUG=1  -DXPRJ_Default=$(CND_CONF)  -Wl,--defsym=__MPLAB_BUILD=1     -gdwarf-2 -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -std=gnu99 -gdwarf-3     $(COMPARISON_BUILD) -Wl,--memorysummary,${DISTDIR}/memoryfile.xml -o ${DISTDIR}/BenchyPSFirmware.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  -o ${DISTDIR}/BenchyPSFirmware.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}      -Wl,--start-group  -Wl,-lm -Wl,--end-group  -Wl,--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1
	@${RM} ${DISTDIR}/BenchyPSFirmware.X.${IMAGE_TYPE}.hex 
	
else
${DISTDIR}/BenchyPSFirmware.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -mcpu=$(MP_PROCESSOR_OPTION) -Wl,-Map=${DISTDIR}/BenchyPSFirmware.X.${IMAGE_TYPE}.map  -DXPRJ_Default=$(CND_CONF)  -Wl,--defsym=__MPLAB_BUILD=1    -Wl,--gc-sections -O1 -ffunction-sections -fdata-sections -fshort-enums -fno-common -funsigned-char -funsigned-bitfields -I"./." -I"include" -I"utils/assembler" -I"utils" -I"examples/include" -I"config" -Wall -std=gnu99 -gdwarf-3     $(COMPARISON_BUILD) -Wl,--memorysummary,${DISTDIR}/memoryfile.xml -o ${DISTDIR}/BenchyPSFirmware.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  -o ${DISTDIR}/BenchyPSFirmware.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}  ${OBJECTFILES_QUOTED_IF_SPACED}      -Wl,--start-group  -Wl,-lm -Wl,--end-group 
	${MP_CC_DIR}\\avr-objcopy -O ihex "${DISTDIR}/BenchyPSFirmware.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX}" "${DISTDIR}/BenchyPSFirmware.X.${IMAGE_TYPE}.hex"
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${OBJECTDIR}
	${RM} -r ${DISTDIR}

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
