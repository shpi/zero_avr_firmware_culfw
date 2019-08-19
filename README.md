# zero_avr_firmware_culfw
CULFW V1.67 modified for SHPI

install with:

```bash

gpio -g mode 11 out
sleep 1
gpio -g mode 11 in
sudo dfu-programmer atmega32u4 erase
sudo dfu-programmer atmega32u4 flash Devices/CUL/CUL_V3.hex
sudo dfu-programmer atmega32u4 start
```


modify board.h to enable/disable radio protocols


compile only for atmega32u4 - potential risk of breaking dfu-firmware


best use with homegear or raw - serialport



