#include "mbed.h"

Serial uart(UART_TX, UART_RX);
DigitalOut led(LED1);
InterruptIn button(P0_4);

void Button_Handler(){
    led = !led;
}

// main() runs in its own thread in the OS
int main()
{
    uart.baud(115200);
    uart.printf("Hello world!\r\n");

    button.rise(&Button_Handler);

    while (true) {
        
    }
}