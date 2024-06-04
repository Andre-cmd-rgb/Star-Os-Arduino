#include <Arduino.h>
#include "kernel.h"

// Define the kernel version
const float Kernel_Version = 1.0;

// ANSI color codes
const char *red = "\033[31m";
const char *green = "\033[32m";
const char *yellow = "\033[33m";
const char *blue = "\033[34m";
const char *magenta = "\033[35m";
const char *cyan = "\033[36m";
const char *reset = "\033[0m";

// Function to initialize the kernel
void Init_Kernel() {
    // Initialization code for the kernel
    Serial.print(cyan); // Set text color to cyan
    Serial.println("Kernel: Kernel Initialized");

    Serial.print("Kernel Version: ");
    Serial.println(Kernel_Version);
    Serial.print(reset); // Reset text color to default
}

// Kernel loop function
void Kernel_Loop() {
    // Code that the kernel will run continuously
    Serial.print(magenta); // Set text color to magenta
    Serial.println("Kernel: Running main loop");
    delay(1000); // Example delay to simulate some processing
    Serial.print(reset); // Reset text color to default
}
