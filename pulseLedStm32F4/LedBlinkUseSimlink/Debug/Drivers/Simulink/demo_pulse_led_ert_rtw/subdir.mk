################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Drivers/Simulink/demo_pulse_led_ert_rtw/demo_pulse_led.c 

OBJS += \
./Drivers/Simulink/demo_pulse_led_ert_rtw/demo_pulse_led.o 

C_DEPS += \
./Drivers/Simulink/demo_pulse_led_ert_rtw/demo_pulse_led.d 


# Each subdirectory must supply rules for building sources it contributes
Drivers/Simulink/demo_pulse_led_ert_rtw/%.o Drivers/Simulink/demo_pulse_led_ert_rtw/%.su Drivers/Simulink/demo_pulse_led_ert_rtw/%.cyclo: ../Drivers/Simulink/demo_pulse_led_ert_rtw/%.c Drivers/Simulink/demo_pulse_led_ert_rtw/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F407xx -c -I../Core/Inc -I/home/quang_le/quang_prog/learn_embedded/simulink_embedded_coder_test/pulseLedStm32F4/LedBlinkUseSimlink/Drivers/Simulink/demo_pulse_led_ert_rtw -I../Drivers/STM32F4xx_HAL_Driver/Inc -I../Drivers/STM32F4xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F4xx/Include -I../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-Drivers-2f-Simulink-2f-demo_pulse_led_ert_rtw

clean-Drivers-2f-Simulink-2f-demo_pulse_led_ert_rtw:
	-$(RM) ./Drivers/Simulink/demo_pulse_led_ert_rtw/demo_pulse_led.cyclo ./Drivers/Simulink/demo_pulse_led_ert_rtw/demo_pulse_led.d ./Drivers/Simulink/demo_pulse_led_ert_rtw/demo_pulse_led.o ./Drivers/Simulink/demo_pulse_led_ert_rtw/demo_pulse_led.su

.PHONY: clean-Drivers-2f-Simulink-2f-demo_pulse_led_ert_rtw

