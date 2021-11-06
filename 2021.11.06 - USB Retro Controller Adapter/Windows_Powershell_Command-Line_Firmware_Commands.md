# Windows Powershell Command-line Reference for Bootloader and Firmware Programming

NOTE: Please replace COM5 with the appropriate COM port that is used on your computer.

These two commands together complete the programming of the bootloader.  The first command performs a chip-erase, unlocks the chip for programming, then initializes the fuses (for chip clock configuration and bootloader installation address).  The second command programs the bootloader then restores the locks on the chip.

```
# Erase, unlock, and set fuses
&'C:\Program Files (x86)\Arduino\hardware\tools\avr/bin/avrdude.exe' -C "C:\Program Files (x86)\Arduino\hardware\tools\avr/etc/avrdude.conf" -v -p atmega328p -c stk500v1 -P COM5 -b 19200 -e -U lock:w:0x3F:m -U efuse:w:0xFD:m -U hfuse:w:0xD8:m -U lfuse:w:0xDF:m 

# Flash bootloader and lock
&'C:\Program Files (x86)\Arduino\hardware\tools\avr/bin/avrdude.exe' -C "C:\Program Files (x86)\Arduino\hardware\tools\avr/etc/avrdude.conf" -v -p atmega328p -c stk500v1 -P COM5 -b 19200 -U flash:w:"C:\Program Files (x86)\Arduino\hardware\arduino\avr/bootloaders/retronic-bootloadhid/main.hex":i -U lock:w:0x0F:m 
```

The following command programs the chip with a given firmware file.  Please replace the path shown with the appropriate firmware path on your computer.

```
# Flash firmware
&'C:\Program Files (x86)\Arduino\hardware\tools\avr\bin\avrdude.exe' -C "C:\Program Files (x86)\Arduino\hardware\tools\avr\etc\avrdude.conf" -v -p atmega328p -c stk500v1 -P COM5 -b 19200 -D -U flash:w:"C:\Users\Steve Guidi\Downloads\AtariDriving_Controller_v3.2.hex":i
```
