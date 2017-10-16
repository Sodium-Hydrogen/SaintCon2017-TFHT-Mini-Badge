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
To add the libraries for the ATtiny boards copy 
```
https://raw.githubusercontent.com/damellis/attiny/ide-1.6.x-boards-manager/package_damellis_attiny_index.json 
``` 
into file -> preferences -> Additional Board Manager URLs
![Add board url](/imgs/boardURL.png?raw=true)



[smd clip]:https://www.digikey.com/product-detail/en/pomona-electronics/5250/501-1311-ND/745102
[avr program]:https://www.digikey.com/product-detail/en/sparkfun-electronics/PGM-09825/1568-1080-ND/5230949
[arduinoisp]:http://www.instructables.com/id/Program-an-ATtiny-with-Arduino/
