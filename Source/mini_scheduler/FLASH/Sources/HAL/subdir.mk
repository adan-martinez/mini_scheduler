################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/HAL/IntcInterrupts.c" \
"../Sources/HAL/LED.c" \
"../Sources/HAL/MODE.c" \
"../Sources/HAL/PIT_DRIVER.c" \
"../Sources/HAL/port.c" \

C_SRCS += \
../Sources/HAL/IntcInterrupts.c \
../Sources/HAL/LED.c \
../Sources/HAL/MODE.c \
../Sources/HAL/PIT_DRIVER.c \
../Sources/HAL/port.c \

OBJS += \
./Sources/HAL/IntcInterrupts_c.obj \
./Sources/HAL/LED_c.obj \
./Sources/HAL/MODE_c.obj \
./Sources/HAL/PIT_DRIVER_c.obj \
./Sources/HAL/port_c.obj \

OBJS_QUOTED += \
"./Sources/HAL/IntcInterrupts_c.obj" \
"./Sources/HAL/LED_c.obj" \
"./Sources/HAL/MODE_c.obj" \
"./Sources/HAL/PIT_DRIVER_c.obj" \
"./Sources/HAL/port_c.obj" \

C_DEPS += \
./Sources/HAL/IntcInterrupts_c.d \
./Sources/HAL/LED_c.d \
./Sources/HAL/MODE_c.d \
./Sources/HAL/PIT_DRIVER_c.d \
./Sources/HAL/port_c.d \

OBJS_OS_FORMAT += \
./Sources/HAL/IntcInterrupts_c.obj \
./Sources/HAL/LED_c.obj \
./Sources/HAL/MODE_c.obj \
./Sources/HAL/PIT_DRIVER_c.obj \
./Sources/HAL/port_c.obj \

C_DEPS_QUOTED += \
"./Sources/HAL/IntcInterrupts_c.d" \
"./Sources/HAL/LED_c.d" \
"./Sources/HAL/MODE_c.d" \
"./Sources/HAL/PIT_DRIVER_c.d" \
"./Sources/HAL/port_c.d" \


# Each subdirectory must supply rules for building sources it contributes
Sources/HAL/IntcInterrupts_c.obj: ../Sources/HAL/IntcInterrupts.c
	@echo 'Building file: $<'
	@echo 'Executing target #6 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/HAL/IntcInterrupts.args" -o "Sources/HAL/IntcInterrupts_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/HAL/%.d: ../Sources/HAL/%.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/HAL/LED_c.obj: ../Sources/HAL/LED.c
	@echo 'Building file: $<'
	@echo 'Executing target #7 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/HAL/LED.args" -o "Sources/HAL/LED_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/HAL/MODE_c.obj: ../Sources/HAL/MODE.c
	@echo 'Building file: $<'
	@echo 'Executing target #8 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/HAL/MODE.args" -o "Sources/HAL/MODE_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/HAL/PIT_DRIVER_c.obj: ../Sources/HAL/PIT_DRIVER.c
	@echo 'Building file: $<'
	@echo 'Executing target #9 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/HAL/PIT_DRIVER.args" -o "Sources/HAL/PIT_DRIVER_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/HAL/port_c.obj: ../Sources/HAL/port.c
	@echo 'Building file: $<'
	@echo 'Executing target #10 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/HAL/port.args" -o "Sources/HAL/port_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '


