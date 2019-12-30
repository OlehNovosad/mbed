#include "mbed.h"

DigitalOut red(P5_1);
DigitalOut green(P5_2);
DigitalOut blue(P5_3);


// main() runs in its own thread in the OS
int main()
{
    red = 1;
    green = 1;
    blue = 1;
    
    while (true) {

    }
}

