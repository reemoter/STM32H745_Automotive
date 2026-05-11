################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (14.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Service/Src/Scheduler.c 

OBJS += \
./Service/Src/Scheduler.o 

C_DEPS += \
./Service/Src/Scheduler.d 


# Each subdirectory must supply rules for building sources it contributes
Service/Src/%.o Service/Src/%.su Service/Src/%.cyclo: ../Service/Src/%.c Service/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DCORE_CM7 -DUSE_HAL_DRIVER -DSTM32H745xx -DUSE_PWR_DIRECT_SMPS_SUPPLY -c -I../Core/Inc -I../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../Drivers/CMSIS/Include -I../Config -I../Platform/Inc -I../Mcal/Inc -I../Service/Inc -I../App/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Service-2f-Src

clean-Service-2f-Src:
	-$(RM) ./Service/Src/Scheduler.cyclo ./Service/Src/Scheduler.d ./Service/Src/Scheduler.o ./Service/Src/Scheduler.su

.PHONY: clean-Service-2f-Src

