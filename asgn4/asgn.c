#include <stdio.h>
#include <stdlib.h>
#include "asgn.h"

int main() {
    // Test values
    int decimalValue = 42; // Change this value for testing

    // Convert decimal to binary
    int* binaryArray = convertDecToBin(decimalValue);

    // Print binary representation
    printf("Binary representation of %d: ", decimalValue);
    for (int i = 0; i < NUMBER_OF_BITS; i++) {
        printf("%d", binaryArray[i]);
    }
    printf("\n");

    // Convert binary back to decimal
    int decimalFromBinary = convertBinToDec(binaryArray);
    printf("Decimal equivalent of binary: %d\n", decimalFromBinary);

    // Convert decimal to hexadecimal
    int* hexArray = convertDecToHex(decimalValue);

    // Print hexadecimal representation
    printf("Hexadecimal representation of %d: ", decimalValue);
    for (int i = 0; i < NUMBER_OF_HEX_DIGITS; i++) {
        printf("0x%X ", hexArray[i]);
    }
    printf("\n");

    // Convert hexadecimal back to decimal
    int decimalFromHex = convertHexToDec(hexArray);
    printf("Decimal equivalent of hexadecimal: %d\n", decimalFromHex);

    // Free dynamically allocated memory
    free(binaryArray);
    free(hexArray);

    return 0;
}