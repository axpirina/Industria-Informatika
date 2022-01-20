# IoM2040



## Introduction

**IoM2040** (hardware for [IoMBian OS](https://github.com/Tknika/iombian) ) is a Raspberry Pi 4 based gateway hardware for industrial teaching area. 

It has been developed mainly for teachers (educational environments), in order to facilitate the implementation of IoM (Internet of Machines) and IIoT (Industrial Internet of Things) systems in embedded devices.
![enter image description here](images/IOM2040k.png "IOM2040")
The initial configuration have a push button to wake or sleep down the hardware in a secure way and red LED to monitor the hardware running [iom shutdown controller](https://github.com/Tknika/iom2040-shutdown-controller).

 It also have a switch and a green LED for a plug an teach practicing with Node Red.  
 
It has been entirely build to be working as a one with [IoMBian OS ](https://github.com/Tknika/iombian) firmware.


## List of elements
|Elements| Quantity | Link | 
|---|---|---|
| Raspberry Pi 4 Kit| 1 | |
| 1.7'' LCD Screen| 1 |[1,77 LCD - Amazon](https://www.amazon.es/AZDelivery-Pantalla-Pulgadas-p%C3%ADxeles-Display/dp/B07TJGF8HS/ref=sr_1_2?__mk_es_ES=%C3%85M%C3%85%C5%BD%C3%95%C3%91&dchild=1&keywords=raspberry%2Bpi%2B1.77%2Btft&qid=1603185668&sr=8-2&th=1)|
| DIN enclosure| 1 |[DIN enclosure - Amazon](https://www.amazon.es/GeeekPi-Caja-para-Raspberry-riel/dp/B083B93PPM)|
| Push button| 1 |[Button RS Online](https://es.rs-online.com/web/p/botones-pulsadores/0320988/)|
| Switch| 1 |[Switch RS Online](https://es.rs-online.com/web/p/botones-pulsadores/1115778/)|
| 5mm LED| 2 ||
| 68 Ω resistor| 2 ||
| Female-Female headers| 17 ||

> **Warning**: Try to buy locally ```nearest store```.

## Scheme
![enter image description here](images/IOM2040_bb.png "Scheme")


  - (For a more detailed raspberry pi 4 pinout, please refer to the following [link](https://www.raspberrypi.org/documentation/usage/gpio/))


## Making progress

Firstly we recommend to make the 3D DIN case holes and place the elements on then. 

	 - LED 		hole 		Ø5mm
	 - Button 	hole 		Ø6mm
	 - Switch 	hole 		Ø19mm
	 - LCD		holes		Ø2mm

These are the measurements for the 3D enclosure holes:

![enter image description here](images/IOM2040%202D.png "3D enclosure")

And these the measurements of the screen location, although we recommend to glue the LCD to the screen, make the Ø2 holes and release and fix it with bolts afterwards.

![enter image description here](images/Pantaila%20CAD%202D.png "LCD")
## Soldering

Prepare the elements with a female header in every pin on them. It requires a bit of soldering.

![enter image description here](images/Elementuak.png)

## Mounting

 - Place all the components in their pins following the related scheme above.
 - Close the enclosure.
 - Burn the latest [IoMBian OS ](https://github.com/Tknika/iombian)  software on the SD.
 - Find the gateway using the [IoMBian discover tool](https://github.com/Tknika/iombian-discover).
 - Enjoy!

## Authors

(c) 2020 [Tknika](https://tknika.eus/) ([Aitor Iturrioz](https://github.com/bodiroga) ,  [Aitor Azpiroz](https://github.com/axpirina))

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.


OPCUA nodoak Node Red Instalazio orokor batean instalatzeko.
Windows:

NodeJS 14 bertsioko azken aktualizazioa instalatu (.msi) 14.18.3
https://nodejs.org/en/download/releases/

Node Red instalatu

npm install -g --unsafe-perm node-red

Node Red instalatuta dagoen rutaraino joan:

Node-RED "C:\\users\<erabiltzaile_izena>\.node-red" karpetan instalatzen da. Bertan "node_modules" izeneko beste karpeta bat aurkituko dugu, baina OPC UA modulua instalatzeko, ez gara azpikarpeta horretan sartu behar.


cd C:\\users\<erabiltzaile_izena>\.node-red

OPCUA moduluak instalatu:

npm install --unsafe-perm --save node-red-contrib-iiot-opcua
