################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../CODE/PCI/PCI_init.c \
../CODE/PCI/Reed.c \
../CODE/PCI/control.c \
../CODE/PCI/encoder.c \
../CODE/PCI/openmv.c \
../CODE/PCI/test.c 

OBJS += \
./CODE/PCI/PCI_init.o \
./CODE/PCI/Reed.o \
./CODE/PCI/control.o \
./CODE/PCI/encoder.o \
./CODE/PCI/openmv.o \
./CODE/PCI/test.o 

COMPILED_SRCS += \
./CODE/PCI/PCI_init.src \
./CODE/PCI/Reed.src \
./CODE/PCI/control.src \
./CODE/PCI/encoder.src \
./CODE/PCI/openmv.src \
./CODE/PCI/test.src 

C_DEPS += \
./CODE/PCI/PCI_init.d \
./CODE/PCI/Reed.d \
./CODE/PCI/control.d \
./CODE/PCI/encoder.d \
./CODE/PCI/openmv.d \
./CODE/PCI/test.d 


# Each subdirectory must supply rules for building sources it contributes
CODE/PCI/%.src: ../CODE/PCI/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: TASKING C/C++ Compiler'
	cctc -D__CPU__=tc37x -I"D:\smart_car_lab2\Design_test1\CODE\Menu" -I"D:\smart_car_lab2\Design_test1\CODE\Flash" -I"D:\smart_car_lab2\Design_test1\CODE\ICM" -I"D:\smart_car_lab2\Design_test1\CODE\PCI" -I"D:\smart_car_lab2\Design_test1\CODE\PID" -I"D:\smart_car_lab2\Design_test1\CODE\UART" -I"D:\smart_car_lab2\Design_test1\CODE" -I"D:\smart_car_lab2\Design_test1\Libraries" -I"D:\smart_car_lab2\Design_test1\Libraries\doc" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\Configurations" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\_Build" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\_Impl" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\_Lib" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\_Lib\DataHandling" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\_Lib\InternalMux" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\_PinMap" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Asclin" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Asclin\Asc" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Asclin\Lin" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Asclin\Spi" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Asclin\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Can" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Can\Can" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Can\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Ccu6" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Ccu6\Icu" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Ccu6\PwmBc" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Ccu6\PwmHl" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Ccu6\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Ccu6\Timer" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Ccu6\TimerWithTrigger" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Ccu6\TPwm" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Convctrl" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Convctrl\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Cpu" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Cpu\Irq" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Cpu\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Cpu\Trap" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Dma" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Dma\Dma" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Dma\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Dts" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Dts\Dts" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Dts\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Edsadc" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Edsadc\Edsadc" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Edsadc\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Eray" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Eray\Eray" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Eray\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Evadc" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Evadc\Adc" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Evadc\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Fce" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Fce\Crc" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Fce\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Flash" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Flash\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Geth" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Geth\Eth" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Geth\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Gpt12" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Gpt12\IncrEnc" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Gpt12\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Gtm" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Gtm\Atom" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Gtm\Atom\Pwm" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Gtm\Atom\PwmHl" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Gtm\Atom\Timer" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Gtm\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Gtm\Tim" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Gtm\Tim\In" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Gtm\Tim\Timer" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Gtm\Tom" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Gtm\Tom\Pwm" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Gtm\Tom\PwmHl" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Gtm\Tom\Timer" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Gtm\Trig" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Hssl" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Hssl\Hssl" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Hssl\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\I2c" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\I2c\I2c" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\I2c\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Iom" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Iom\Driver" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Iom\Iom" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Iom\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Msc" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Msc\Msc" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Msc\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Mtu" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Mtu\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Pms" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Pms\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Port" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Port\Io" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Port\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Psi5" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Psi5\Psi5" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Psi5\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Psi5s" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Psi5s\Psi5s" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Psi5s\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Qspi" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Qspi\SpiMaster" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Qspi\SpiSlave" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Qspi\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Scu" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Scu\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Sent" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Sent\Sent" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Sent\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Smu" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Smu\Smu" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Smu\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Src" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Src\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Stm" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Stm\Std" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\iLLD\TC37A\Tricore\Stm\Timer" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\Infra" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\Infra\Platform" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\Infra\Platform\Tricore" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\Infra\Platform\Tricore\Compilers" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\Infra\Sfr" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\Infra\Sfr\TC37A" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\Infra\Sfr\TC37A\_Reg" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\Infra\Ssw" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\Infra\Ssw\TC37A" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\Infra\Ssw\TC37A\Tricore" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\Service" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\Service\CpuGeneric" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\Service\CpuGeneric\_Utilities" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\Service\CpuGeneric\If" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\Service\CpuGeneric\If\Ccu6If" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\Service\CpuGeneric\StdIf" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\Service\CpuGeneric\SysSe" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\Service\CpuGeneric\SysSe\Bsp" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\Service\CpuGeneric\SysSe\Comm" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\Service\CpuGeneric\SysSe\General" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\Service\CpuGeneric\SysSe\Math" -I"D:\smart_car_lab2\Design_test1\Libraries\infineon_libraries\Service\CpuGeneric\SysSe\Time" -I"D:\smart_car_lab2\Design_test1\Libraries\seekfree_libraries" -I"D:\smart_car_lab2\Design_test1\Libraries\seekfree_libraries\common" -I"D:\smart_car_lab2\Design_test1\Libraries\seekfree_peripheral" -I"D:\smart_car_lab2\Design_test1\USER" --iso=99 --c++14 --language=+volatile --anachronisms --fp-model=3 --fp-model=c --fp-model=f --fp-model=l --fp-model=n --fp-model=r --fp-model=z -O0 --tradeoff=4 --compact-max-size=200 -g -Wc-w544 -Wc-w557 -Ctc37x -o "$@"  "$<"  -cs --dep-file=$(@:.src=.d) --misrac-version=2012 -N0 -Z0 -Y0 2>&1;
	@echo 'Finished building: $<'
	@echo ' '

CODE/PCI/%.o: ./CODE/PCI/%.src
	@echo 'Building file: $<'
	@echo 'Invoking: TASKING Assembler'
	astc -o  "$@" "$<" --list-format=L1 --optimize=gs
	@echo 'Finished building: $<'
	@echo ' '


