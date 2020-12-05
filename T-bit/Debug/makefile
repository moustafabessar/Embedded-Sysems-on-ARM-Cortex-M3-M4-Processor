################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include Startup/subdir.mk
-include Src/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
EXECUTABLES += \
T-bit.elf \

SIZE_OUTPUT += \
default.size.stdout \

OBJDUMP_LIST += \
T-bit.list \

OBJCOPY_BIN += \
T-bit.bin \


# All Target
all: T-bit.elf secondary-outputs

# Tool invocations
T-bit.elf: $(OBJS) $(USER_OBJS) E:\Courses\FastBit\ Embedded\ Brain\ Academy\ Courses\ARM\ Cortex-M4-Processor\T-bit\STM32F446RETX_FLASH.ld
	arm-none-eabi-gcc -o "T-bit.elf" @"objects.list" $(USER_OBJS) $(LIBS) -mcpu=cortex-m4 -T"E:\Courses\FastBit Embedded Brain Academy Courses\ARM Cortex-M4-Processor\T-bit\STM32F446RETX_FLASH.ld" --specs=nosys.specs -Wl,-Map="T-bit.map" -Wl,--gc-sections -static --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -Wl,--start-group -lc -lm -Wl,--end-group
	@echo 'Finished building target: $@'
	@echo ' '

default.size.stdout: $(EXECUTABLES)
	arm-none-eabi-size  $(EXECUTABLES)
	@echo 'Finished building: $@'
	@echo ' '

T-bit.list: $(EXECUTABLES)
	arm-none-eabi-objdump -h -S $(EXECUTABLES) > "T-bit.list"
	@echo 'Finished building: $@'
	@echo ' '

T-bit.bin: $(EXECUTABLES)
	arm-none-eabi-objcopy  -O binary $(EXECUTABLES) "T-bit.bin"
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) *
	-@echo ' '

secondary-outputs: $(SIZE_OUTPUT) $(OBJDUMP_LIST) $(OBJCOPY_BIN)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
