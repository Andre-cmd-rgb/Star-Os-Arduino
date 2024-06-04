#line 1 "C:\\Users\\andre\\Documents\\Coding Projects\\Arduino and Esp32\\Star Os\\Src\\StarOs_Bootloader\\StarOs_Bootloader.ino"
#include <Arduino.h>
#include "kernel.h"

// Define the bootloader version
const float Bootloader_Version = 1.0;

// Define the serial baud rate
const long SERIAL_BAUD_RATE = 9600;

// Define a flag to enable or disable waiting for the serial connection
const bool WAIT_FOR_SERIAL = true;

// Function to initialize serial communication
#line 14 "C:\\Users\\andre\\Documents\\Coding Projects\\Arduino and Esp32\\Star Os\\Src\\StarOs_Bootloader\\StarOs_Bootloader.ino"
void Init_Serial();
#line 25 "C:\\Users\\andre\\Documents\\Coding Projects\\Arduino and Esp32\\Star Os\\Src\\StarOs_Bootloader\\StarOs_Bootloader.ino"
void setup();
#line 35 "C:\\Users\\andre\\Documents\\Coding Projects\\Arduino and Esp32\\Star Os\\Src\\StarOs_Bootloader\\StarOs_Bootloader.ino"
void loop();
#line 14 "C:\\Users\\andre\\Documents\\Coding Projects\\Arduino and Esp32\\Star Os\\Src\\StarOs_Bootloader\\StarOs_Bootloader.ino"
void Init_Serial() {
    Serial.begin(SERIAL_BAUD_RATE);
    if (WAIT_FOR_SERIAL) {
        while (!Serial) {
            // Wait for the serial connection to be established
        }
    }
    Serial.println("Bootloader: Serial Initialized");
}

// Arduino setup function
void setup() {
    Init_Serial();
    Serial.print("Bootloader Version: ");
    Serial.println(Bootloader_Version);

    // Initialize the kernel
    Init_Kernel();
}

// Arduino loop function
void loop() {
    // Run the kernel loop
    Kernel_Loop();
}

