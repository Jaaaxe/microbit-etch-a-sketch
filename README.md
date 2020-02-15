# Internet of Things - Challenge One

**Author**: Mariyam Yasmeen\
**Student ID**: S1800367   
**Batch**: BSc (Hons) Computer Science Jan 2019\
**Project Name**: Microbit Etch A Sketch\
**Created Date**: February 2020\
**Description**: Create pixel art using a microbit

# Microbit Etch A Sketch

## What is an Etch A Sketch?
An Etch A Sketch is a toy invented in the 1960s An Etch A Sketch has a thick,\
flat gray screen in a red plastic frame. There are two white knobs on the front\
of the frame in the lower corners. Twisting the knobs moves a stylus that\
displaces aluminum powder on the back of the screen, leaving a solid line. \
The knobs create lineographic images.

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
you might not always get proper contact. But art takes patience ;).

![](https://gitlab.uwe.ac.uk/m2-yasmeen/iot-challenge-1/raw/master/Img/pixart.png)
# Have Fun!