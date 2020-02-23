# Internet of Things - Challenge One --Microbit Etch A Sketch

**Author**: Mariyam Yasmeen\
**Student ID**: S1800367   
**Batch**: BSc (Hons) Computer Science Jan 2019\
**Project Name**: Microbit Etch A Sketch\
**Created Date**: February 2020\
**Description**: Create pixel art using a microbit


## What is an Etch A Sketch?
An Etch A Sketch is a toy invented in the 1960s. An Etch A Sketch has a thick,\
flat gray screen in a red plastic frame. There are two white knobs on the front\
of the frame in the lower corners. Twisting the knobs moves a stylus that\
displaces aluminum powder on the back of the screen, leaving a solid line. \
The knobs create lineographic images.

## What do you need?
* A microbit
* Micro USB cable to transfer the game

## How do we install the game?
There are two ways you can setup your microbit to use the Etch A Sketch
### Downloading hex code
1. Download the .hex file located <a href="https://gitlab.uwe.ac.uk/m2-yasmeen/iot-challenge-1/raw/master/Etchasketch.NRF51_MICROBIT.hex?inline=false">here</a> (make sure the extension is .hex)
2. Connect your microbit to your computer.
3. Drag and drop the file into your microbit.
4. Start drawing!

### Compiling the source code
You can also make your own changes to the game and compile it yourself!
1. Head on over to ide.mbed.com
2. Create an account and sign in
3. Create a new empty program
4. Head to import and search for "microbit"
5. Import the library that has the tags: dal, lancaster, microbit
6. Create a new file called main.cpp and copy paste the code from the main in this repo
7. Make the changes that you would like and click compile
8. Drag and drop the file into your microbit.
9. Start drawing!

## How does the game work on the microbit?
The microbit has a 5x5 led display which allows users to move a *pixel* using\
the button A for horizontal movement and button B for vertical movement.\
You can then set the pixel by touching the contacts P0 and GND together.\
Moving to a set led and pressing touching the contacts P0 and GND will switch\
the selected led off in case you want to change the drawing or turned on a\
wrong led. The program allows the user to create pixel art and find out clever\
new ways in which they can create objects within the constraints of the 5x5 array of leds.

![](https://gitlab.uwe.ac.uk/m2-yasmeen/iot-challenge-1/raw/master/Img/giphy.gif)

## Controls

**Button A**: Control the current pixel vertically. Press to move the pixel by one space.\
**Button B**: Control the current pixel horizontally. Press to move the pixel by one space.\
**P0 Contact**: Touching the P0 contact with GND sets the pixel at its current position.\
A collection of *set pixels* make up your pixel art.\
**P2 Contact**: Touching the P2 contact with GND clears your board.

## Warnings
Touching the P0 / P2 contact input on the microbit isn't always registered due to how\
you might not always get proper contact. But art takes patience ;)

## Troubleshooting
If you are unable to play the game try one of the following fixes:

### Game does not load
Try to compile the hex or download the file and try again OR reset the microbit.\
You can find the reset button located on the back.

### Microbit is not detected on your computer
Try using a different micro USD cable or connect it to a different computer.\

### Microbit won't power on
Check to see if your micro USD cable works or if the batteries in the external\
power pack need to be replaced.

### I have another issue 
Please mail me your enquiry at mariyam2.yasmeen@live.uwe.ac.uk

![](https://gitlab.uwe.ac.uk/m2-yasmeen/iot-challenge-1/raw/master/Img/pixart.png)
# Have Fun!