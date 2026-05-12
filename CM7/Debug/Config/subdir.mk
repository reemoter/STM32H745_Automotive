################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (14.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Config/McalGpio_Cfg.c \
../Config/Scheduler_Cfg.c 

OBJS += \
./Config/McalGpio_Cfg.o \
./Config/Scheduler_Cfg.o 

C_DEPS += \
./Config/McalGpio_Cfg.d \
./Config/Scheduler_Cfg.d 


# Each subdirectory must supply rules for building sources it contributes
Config/%.o Config/%.su Config/%.cyclo: ../Config/%.c Config/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DCORE_CM7 -DUSE_HAL_DRIVER -DSTM32H745xx -DUSE_PWR_DIRECT_SMPS_SUPPLY -c -I../Core/Inc -I../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../Drivers/CMSIS/Include -I../Config -I../Platform/Inc -I../Mcal/Inc -I../Service/Inc -I../App/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Config

clean-Config:
	-$(RM) ./Config/McalGpio_Cfg.cyclo ./Config/McalGpio_Cfg.d ./Config/McalGpio_Cfg.o ./Config/McalGpio_Cfg.su ./Config/Scheduler_Cfg.cyclo ./Config/Scheduler_Cfg.d ./Config/Scheduler_Cfg.o ./Config/Scheduler_Cfg.su

.PHONY: clean-Config

