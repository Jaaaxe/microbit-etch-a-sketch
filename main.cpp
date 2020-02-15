/////////////////////////////////////////////
//     INTERNET OF THINGS | CHALLENGE 1    //
//Student Name: Mariyam Yasmeen            //
//Student ID: S1800367                     //
//Project Name: IOT - Challenge One        //
//Created Date: February 2020              //
//Description: Microbit - Etch A Sketch    //
//User Advice: When in use, setting pixels //
//(A+B) might require multiple attempts    //
/////////////////////////////////////////////

#include "MicroBit.h"

MicroBit uBit;

// define the current pixel location
int cursor_x = 0; // x position
int cursor_y = 0; // y postion
int cursor_b_count = 0; // blink counter
bool cursor_isLit = false; // is lit boolean


// This is the class for the Leds
class Led {
    public:        
        int x;
        int y;
        bool isLit;
    
        Led(int xin, int yin){
            x = xin;
            y = yin;
        }
};

// Define the array with a length of 25 for each led on the Micro:Bit
Led LedArray[25] = {
    Led(0,0), Led(1,0), Led(2,0), Led(3,0), Led(4,0),
    Led(1,0), Led(1,1), Led(1,2), Led(1,3), Led(1,4),
    Led(2,0), Led(2,1), Led(2,2), Led(2,3), Led(2,4),
    Led(3,0), Led(3,1), Led(3,2), Led(3,3), Led(3,4),
    Led(4,0), Led(4,1), Led(4,2), Led(4,3), Led(4,4)
};


/////////////////////////////////////////////
//              UPDATE SCREEN              //
//Description: This function sets a pixel  //
//in place so that the user can create art.//
//It starts by clearing the display.       //
//Returns: Void                            //
//Parameters: None                         //
/////////////////////////////////////////////

void UpdateScreen() {
    
    uBit.display.clear(); // clear the display
    int brightVal = 0;
    for (int i = 0; i < 25; i++) { // for each led in the LedArray object, draw it
        if (LedArray[i].isLit){
            brightVal = 255;
        } else {
            brightVal = 0;
        }
        uBit.display.image.setPixelValue(LedArray[i].x, LedArray[i].y, brightVal);   
    }
    
    if (cursor_isLit) { // if the cursor is supposed to be lit, light it.
        uBit.display.image.setPixelValue(cursor_x, cursor_y, 100);
    } else { // if not, turn it off
        uBit.display.image.setPixelValue(cursor_x, cursor_y, 0);
    }
    
    if (cursor_b_count == 2) { // check if the cursor is ready to toggle
        cursor_b_count = 0;
        cursor_isLit = not cursor_isLit;
    } else {
        cursor_b_count++;
    }
}

/////////////////////////////////////////////
//                TOGGLE LED               //
//Description: Will toggle the led to be on//
//in the position provided in the parameter//
//Returns: Void                            //
//Parameters: Int X, Int Y                 //
/////////////////////////////////////////////

void ToggleLed(int xin, int yin){
    for (int i = 0; i < 25; i++){
        if ((LedArray[i].x == xin) && (LedArray[i].y == yin)) {
            LedArray[i].isLit = not LedArray[i].isLit;    
        }   
    }
}

/////////////////////////////////////////////
//                CLEAR LED                //
//Description: This will clear the "isLit" //
//attribute of all the leds in LedArray    //
//Returns: None                            //
//Parameters: None                         //
/////////////////////////////////////////////

void ClearLedArray() {
    for (int i = 0; i < 25; i++) {
        LedArray[i].isLit = false;   
    }   
}

/////////////////////////////////////////////
//                MAIN FUNCTION            //
//Description: Displays welcome message.   //
//Is.. main.                               //
//Returns: Int - but not really            //
//Parameters: N/A                          //
/////////////////////////////////////////////

int main() {
    // Set the display to greyscale mode so as to have a different cursor brightness
    uBit.display.setDisplayMode(DISPLAY_MODE_GREYSCALE); 
    uBit.init(); // initialize the MicroBit Object
    while (true) { // Infinite loop of "drawing"
        if (uBit.io.P0.isTouched()) { // if the P0 sensor is touched, set pixel on current led
            ToggleLed(cursor_x, cursor_y);
        } else if (uBit.buttonB.isPressed()) { // if the B button is pressed, move horizontally by one space
            if (cursor_x < 4){
                cursor_x++;
            } else {
                cursor_x = 0;
            }
        } else if (uBit.buttonA.isPressed()) { // if the A button is pressed, move vertically by one space
            if (cursor_y < 4){
                cursor_y++;
            } else {
                cursor_y = 0;
            }
        } else if (uBit.io.P2.isTouched()) { // if the P2 sensor is touched, reset the board
            ClearLedArray(); // clear the leds
        }
        
        
        uBit.sleep(150); // sleep for 150 seconds so that our buttons doesnt overshoot when moved
        UpdateScreen(); // update the screen
    }
}