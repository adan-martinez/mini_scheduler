################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../../makefile.local

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS_QUOTED += \
"../Sources/App/scheduler.c" \

C_SRCS += \
../Sources/App/scheduler.c \

OBJS += \
./Sources/App/scheduler_c.obj \

OBJS_QUOTED += \
"./Sources/App/scheduler_c.obj" \

C_DEPS += \
./Sources/App/scheduler_c.d \

OBJS_OS_FORMAT += \
./Sources/App/scheduler_c.obj \

C_DEPS_QUOTED += \
"./Sources/App/scheduler_c.d" \


# Each subdirectory must supply rules for building sources it contributes
Sources/App/scheduler_c.obj: ../Sources/App/scheduler.c
	@echo 'Building file: $<'
	@echo 'Executing target #11 $<'
	@echo 'Invoking: PowerPC Compiler'
	"$(PAToolsDirEnv)/mwcceppc" @@"Sources/App/scheduler.args" -o "Sources/App/scheduler_c.obj" "$<" -MD -gccdep
	@echo 'Finished building: $<'
	@echo ' '

Sources/App/%.d: ../Sources/App/%.c
	@echo 'Regenerating dependency file: $@'
	
	@echo ' '


