################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Project_Headers/ADC0_driver.c" \
"../Project_Headers/UART.c" \
"../Project_Headers/conversion_ADC.c" \
"../Project_Headers/leds.c" \

C_SRCS += \
../Project_Headers/ADC0_driver.c \
../Project_Headers/UART.c \
../Project_Headers/conversion_ADC.c \
../Project_Headers/leds.c \

OBJS += \
./Project_Headers/ADC0_driver.o \
./Project_Headers/UART.o \
./Project_Headers/conversion_ADC.o \
./Project_Headers/leds.o \

C_DEPS += \
./Project_Headers/ADC0_driver.d \
./Project_Headers/UART.d \
./Project_Headers/conversion_ADC.d \
./Project_Headers/leds.d \

OBJS_QUOTED += \
"./Project_Headers/ADC0_driver.o" \
"./Project_Headers/UART.o" \
"./Project_Headers/conversion_ADC.o" \
"./Project_Headers/leds.o" \

C_DEPS_QUOTED += \
"./Project_Headers/ADC0_driver.d" \
"./Project_Headers/UART.d" \
"./Project_Headers/conversion_ADC.d" \
"./Project_Headers/leds.d" \

OBJS_OS_FORMAT += \
./Project_Headers/ADC0_driver.o \
./Project_Headers/UART.o \
./Project_Headers/conversion_ADC.o \
./Project_Headers/leds.o \


# Each subdirectory must supply rules for building sources it contributes
Project_Headers/ADC0_driver.o: ../Project_Headers/ADC0_driver.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Project_Headers/ADC0_driver.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Project_Headers/ADC0_driver.o"
	@echo 'Finished building: $<'
	@echo ' '

Project_Headers/UART.o: ../Project_Headers/UART.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Project_Headers/UART.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Project_Headers/UART.o"
	@echo 'Finished building: $<'
	@echo ' '

Project_Headers/conversion_ADC.o: ../Project_Headers/conversion_ADC.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Project_Headers/conversion_ADC.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Project_Headers/conversion_ADC.o"
	@echo 'Finished building: $<'
	@echo ' '

Project_Headers/leds.o: ../Project_Headers/leds.c
	@echo 'Building file: $<'
	@echo 'Executing target #9 $<'
	@echo 'Invoking: ARM Ltd Windows GCC C Compiler'
	"$(ARMSourceryDirEnv)/arm-none-eabi-gcc" "$<" @"Project_Headers/leds.args" -MMD -MP -MF"$(@:%.o=%.d)" -o"Project_Headers/leds.o"
	@echo 'Finished building: $<'
	@echo ' '


