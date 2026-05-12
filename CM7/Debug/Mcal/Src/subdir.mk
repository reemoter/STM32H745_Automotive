################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (14.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Mcal/Src/McalGpio.c \
../Mcal/Src/McalTime.c \
../Mcal/Src/McalTimer.c 

OBJS += \
./Mcal/Src/McalGpio.o \
./Mcal/Src/McalTime.o \
./Mcal/Src/McalTimer.o 

C_DEPS += \
./Mcal/Src/McalGpio.d \
./Mcal/Src/McalTime.d \
./Mcal/Src/McalTimer.d 


# Each subdirectory must supply rules for building sources it contributes
Mcal/Src/%.o Mcal/Src/%.su Mcal/Src/%.cyclo: ../Mcal/Src/%.c Mcal/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DCORE_CM7 -DUSE_HAL_DRIVER -DSTM32H745xx -DUSE_PWR_DIRECT_SMPS_SUPPLY -c -I../Core/Inc -I../../Drivers/STM32H7xx_HAL_Driver/Inc -I../../Drivers/STM32H7xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32H7xx/Include -I../../Drivers/CMSIS/Include -I../Config -I../Platform/Inc -I../Mcal/Inc -I../Service/Inc -I../App/Inc -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Mcal-2f-Src

clean-Mcal-2f-Src:
	-$(RM) ./Mcal/Src/McalGpio.cyclo ./Mcal/Src/McalGpio.d ./Mcal/Src/McalGpio.o ./Mcal/Src/McalGpio.su ./Mcal/Src/McalTime.cyclo ./Mcal/Src/McalTime.d ./Mcal/Src/McalTime.o ./Mcal/Src/McalTime.su ./Mcal/Src/McalTimer.cyclo ./Mcal/Src/McalTimer.d ./Mcal/Src/McalTimer.o ./Mcal/Src/McalTimer.su

.PHONY: clean-Mcal-2f-Src

