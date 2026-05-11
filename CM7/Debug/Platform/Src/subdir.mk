################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (14.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Platform/Src/MiniEcu.c 

OBJS += \
./Platform/Src/MiniEcu.o 

C_DEPS += \
./Platform/Src/MiniEcu.d 


# Each subdirectory must supply rules for building sources it contributes
Platform/Src/%.o Platform/Src/%.su Platform/Src/%.cyclo: ../Platform/Src/%.c Platform/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DCORE_CM7 -DUSE_HAL_DRIVER -DSTM32H745xx -DUSE_PWR_DIRECT_SMPS_SUPPLY -c -I../Core/Inc -I../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../Drivers/CMSIS/Include -I../Config -I../Platform/Inc -I../Mcal/Inc -I../Service/Inc -I../App/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Platform-2f-Src

clean-Platform-2f-Src:
	-$(RM) ./Platform/Src/MiniEcu.cyclo ./Platform/Src/MiniEcu.d ./Platform/Src/MiniEcu.o ./Platform/Src/MiniEcu.su

.PHONY: clean-Platform-2f-Src

