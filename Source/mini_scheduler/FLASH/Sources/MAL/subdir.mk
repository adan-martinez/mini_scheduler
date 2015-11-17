################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/MAL/TaskHandler.c" \
"../Sources/MAL/kernel.c" \

C_SRCS += \
../Sources/MAL/TaskHandler.c \
../Sources/MAL/kernel.c \

OBJS += \
./Sources/MAL/TaskHandler_c.obj \
./Sources/MAL/kernel_c.obj \

OBJS_QUOTED += \
"./Sources/MAL/TaskHandler_c.obj" \
"./Sources/MAL/kernel_c.obj" \

C_DEPS += \
./Sources/MAL/TaskHandler_c.d \
./Sources/MAL/kernel_c.d \

OBJS_OS_FORMAT += \
./Sources/MAL/TaskHandler_c.obj \
./Sources/MAL/kernel_c.obj \

C_DEPS_QUOTED += \
"./Sources/MAL/TaskHandler_c.d" \
"./Sources/MAL/kernel_c.d" \


# Each subdirectory must supply rules for building sources it contributes
Sources/MAL/TaskHandler_c.obj: ../Sources/MAL/TaskHandler.c
	@echo 'Building file: $<'
	@echo 'Executing target #4 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/MAL/TaskHandler.args" -o "Sources/MAL/TaskHandler_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/MAL/%.d: ../Sources/MAL/%.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '

Sources/MAL/kernel_c.obj: ../Sources/MAL/kernel.c
	@echo 'Building file: $<'
	@echo 'Executing target #5 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/MAL/kernel.args" -o "Sources/MAL/kernel_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '


