# zero_avr_firmware_culfw
CULFW V1.67 modified for SHPI

You need an CC1101 radio module connected to SHPI. 
Make sure you've added an antenna (a simple wire antenna soldered to the marked orange circle is sufficient)
 and check the solder joints for shorts. 



![Installed CC1101 one SHPI.zero prototype](radiomodule.jpg)


install with:

```bash
git clone https://github.com/shpi/zero_avr_firmware_culfw.git
cd zero_avr_firmware_culfw/

gpio -g mode 11 out
sleep 1
gpio -g mode 11 in
sudo dfu-programmer atmega32u4 erase
sudo dfu-programmer atmega32u4 flash Devices/CUL/CUL_V3.hex
sudo dfu-programmer atmega32u4 start

minicom -b 9600 -D /dev/ttyACM0

-> "V" enter -> V1.67 CUL868
- > "X67" enter -> no output
-> "C35" enter -> 0D / 13

```


modify board.h to enable/disable radio protocols


compile only for atmega32u4 - potential risk of breaking dfu-firmware


best use with homegear or raw - serialport



