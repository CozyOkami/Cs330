#include <stdio.h>
#include <stdlib.h>
#include "asgn4.h"


int main() {
    // Test values
    int decimalValue = 255; // Change this value for testing

    // Convert decimal to binary
    int* binaryArray = convertDecToBin(decimalValue);

    // Print binary array elements
    printf("Binary array: ");
    for (int i = 0; i < NUMBER_OF_BITS; i++) {
        printf("%d ", *(binaryArray + i));
    }
    printf("\n");

    // Convert decimal to hexadecimal
    int* hexArray = convertDecToHex(decimalValue);

    // Print hexadecimal array elements
    printf("Hexadecimal array: ");
    for (int i = 0; i < NUMBER_OF_HEX_DIGITS; i++) {
        printf("0x%X ", *(hexArray + i));
    }
    printf("\n");

    // Example section: Take a binary array as input
    int binaryInput[] = {1, 0, 1, 0, 1, 0, 1, 0}; // Change this binary array for testing
    printf("Binary array input: ");
    for (int i = 0; i < NUMBER_OF_BITS; i++) {
        printf("%d ", *(binaryInput + i));
    }
    printf("\n");

    // Example section: Take a hexadecimal array as input
    int hexInput[] = {0x1, 0xA, 0x5}; // Change this hexadecimal array for testing
    printf("Hexadecimal array input: ");
    for (int i = 0; i < NUMBER_OF_HEX_DIGITS; i++) {
        printf("0x%X ", *(hexInput + i));
    }
    printf("\n");

    // Free dynamically allocated memory
    free(binaryArray);
    free(hexArray);

    return 0;
}

