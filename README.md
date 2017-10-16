# SaintCon 2017 TFHT Mini-Badge #
### This is a tutorial to "Awaken the Alien" ###

#### To begin You need ####
* to have the Arduino IDE 1.6+ installed 
* have a SMD ATtiny85
* A soldering iron that can do SMD
* A knife to cut traces on the board
* A [smd 8 pin programming clip][smd clip]
* A [AVR programmer][avr program] or an [Arduino as ISP][arduinoisp]


## Setting Up Arduino for ATtiny85 ##
To add the libraries for the ATtiny boards copy:
```
https://raw.githubusercontent.com/damellis/attiny/ide-1.6.x-boards-manager/package_damellis_attiny_index.json 
``` 
into ```file -> preferences -> Additional Board Manager URLs```<br><br>
![Add board url](/imgs/boardURL.png?raw=true)<br><br>
#### Installing the Boards ####
Navigate to ```Tools -> Board -> Board Manager```
Scroll down till you see the ATtiny and click install.<br><br>
![Install board](/imgs/installBoard.png?raw=true)<br><br>
#### Flash the bootloader to the ATtiny85 ####
* Set the board type to ATtiny24/45/85
* Set the proccessor type to ATtiny85
* Set the clock to internal 8 MHz
* __Make Sure the right programmer is selected!__<br><br>
![flash board](/imgs/flash.png?raw=true)<br><br>

## Modify the Mini-Badge ##

* The first step is to cut the traces on the circuit board between the two of the pads on SJ1 and SJ2 with a knife.
* The second step is to bridge the two pads on both SJ1 and SJ2 that where not connected.
* Finally solder the ATtiny85 to the board<br><br>
![Example](/imgs/mod.png?raw=true)<br><br>

## Programming the Board ##
Open the program you wish to upload to the Mini-Badge to "Awaken the Alien" and __make sure the settings are the same as when you flashed the bootloader.__ Then just click the upload button.


[smd clip]:https://www.digikey.com/product-detail/en/pomona-electronics/5250/501-1311-ND/745102
[avr program]:https://www.digikey.com/product-detail/en/sparkfun-electronics/PGM-09825/1568-1080-ND/5230949
[arduinoisp]:http://www.instructables.com/id/Program-an-ATtiny-with-Arduino/
