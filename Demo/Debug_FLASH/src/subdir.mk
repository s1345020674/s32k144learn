################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/flexcan_init.c \
../src/ftm_pwm_init.c \
../src/lpuart_init.c \
../src/main.c 

OBJS += \
./src/flexcan_init.o \
./src/ftm_pwm_init.o \
./src/lpuart_init.o \
./src/main.o 

C_DEPS += \
./src/flexcan_init.d \
./src/ftm_pwm_init.d \
./src/lpuart_init.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/flexcan_init.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


