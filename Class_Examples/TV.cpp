/*
Variable Names:
• powerButton 
• channels
• contrast
• brightness

Functions:
• TV() // Default constructor
• PowerUp()
• PowerDown()
• TurnUpChannelKnob()
• TurnDownChannelKnob()
• TurnUpBrightnessKnob()
• TurnDownBrightnessKnob()
• TurnUpContrastKnob()
• TurnDownContrastKnob()
• Display_TV_status()
*/

#include <iostream>

using namespace std;

//Function prototypes
int PowerUp(int);
int PowerDown(int);
int TurnUpChannelKnob(int, int);
int TurnDownChannelKnob(int, int);
int TurnUpBrightnessKnob(int, int);
int TurnDownBrightnessKnob(int, int);
int TurnUpContrastKnob(int, int);
int TurnDownContrastKnob(int, int);
void Display_TV_status(int, int, int, int);

int main() {

    int power = 0; //Assume initially TV is in OFF position (0).
    int channel = 1;
    int contrast = 5;
    int brightness = 5;

    //Invoke/call PowerUp function
    power = PowerUp(1);
    cout << "Power of " << power << " means power is on" << endl;
    power = PowerDown(power);
    cout << "Power of " << power << " means power is down" << endl;
  
    channel = TurnUpChannelKnob(power, channel);
    Display_TV_status(power, channel, brightness, contrast);

    channel = TurnDownChannelKnob(power, channel);
    Display_TV_status(power, channel, brightness, contrast);

    brightness = TurnUpBrightnessKnob(power, brightness);
    Display_TV_status(power, channel, brightness, contrast);

    brightness = TurnDownBrightnessKnob(power, brightness);
    Display_TV_status(power, channel, brightness, contrast);

    contrast = TurnUpContrastKnob(power, contrast);
    Display_TV_status(power, channel, brightness, contrast);

    contrast = TurnDownContrastKnob(power, contrast);
    Display_TV_status(power, channel, brightness, contrast);

    return 0;

}

//Funcion definitions
int PowerUp(int p) {

    p = 1;
    return p;

}
int PowerDown(int d) {

    if (d==1)

        d = 0;
        return d;

    

}
int TurnUpChannelKnob(int p, int c) {

    if (p==1) {
        if (c==10)
            c = 1;
        else
            c++;
    }
    

}
int TurnDownChannelKnob(int p, int c) {

    if (p==1) {
        if (c==1)
            c = 10;
        else
            c--;
    }

}
int TurnUpBrightnessKnob(int p, int b) {

    if (p==1) {
        if (b!=10)
            b++;
    }

}
int TurnDownBrightnessKnob(int p, int b) {

    if (p==1) {
        if (b != 1)
            b--;
    }

}
int TurnUpContrastKnob(int p, int c) {

    if (p==1) {
        if (c!=10)
            c++;
    }

}
int TurnDownContrastKnob(int p, int c) {

    if (p==1) {
        if (c != 1)
            c--;
    }

}
void Display_TV_status(int p, int c, int b, int r) {

    cout << "Power is " << p << ", channel is " << c << ", brightness is " << b << ", and contrast is " << r << endl;

}