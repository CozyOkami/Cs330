#ifndef __asgn4__
#define __asgn4__

#include <stdio.h>
#include <math.h>
#include <stdlib.h> /* for malloc() */

/* some helper define statements */
#define NUMBER_OF_BITS 16 /* since we're using 16-bit binary numbers */
#define NUMBER_OF_HEX_DIGITS 4 /* 16-bit numbers are 2 bytes, or 4 hex digits */

/* Helper function to print a 16-bit binary number in a nice format */
void printMyBinaryNum(int *myNumArray) {
    /* loop through the number, one element (bit) at a time */
    for (int i = 0; i < NUMBER_OF_BITS; i++) {
        /* Let's print a space before every 4th digit (except the first, i==0), for readability */
        if (i % 4 == 0 && i != 0) {
            /* Retrieve this element and print it */
            printf(" %d", *(myNumArray + i));
        } else {
            /* Else, this is not a 4th digit, just print it with no space */
            printf("%d", *(myNumArray + i));
        }
    } // end for-i loop
    printf("\n"); /* and a newline when we're done, because it's kind to the reader */
} // end printMyBinaryNum()

/* Helper function to print a 4-bit hex number */
void printMyHexNum(int *myNumArray) {
    /* Start by printing a sign to inform the reader that what follows is a hex number */
    printf("0x");
    /* Loop through the number, one element (digit) at a time */
    for (int i = 0; i < NUMBER_OF_HEX_DIGITS; i++) {
        /* Print it out, %X is the conversion specifier for hex, in capital letters */
        printf("%X", *(myNumArray + i));
    }
    printf("\n"); /* and a newline when we're done, again because it's kind to readers */
} // end printMyHexNum()

/* Helper function to reverse an array */
int* reverseMyArrayPlease(int size, int *myArray) {
    /* Allocate memory, one int for each element, size * 4 bytes */
    int *reversedArray = malloc(size * sizeof(int));

    /* Loop through the array, extract one element, place it in the new array */
    for (int i = 0; i < size; i++) {
        /* -1 since the end of the array is at (size-1),
        -i since we want to reverse the array */
        *(reversedArray + (size - 1) - i) = *(myArray + i);
    }
    return reversedArray;
} // end reverseMyArrayPlease()

/* ========================================================================= */
/* ~~~~~~~~~~~~~~~~~~~~~ your functions go here ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
/* Note: main() goes in the asgn4.c file */


/*   This function converts a decimal integer into a binary array. 
   It takes an integer decimal as input and returns a dynamically allocated 
   array of integers representing the binary representation of the decimal number.
   
   Input:
   - decimal: The decimal integer to be converted.
   
   Output:
   - Returns a pointer to the binary array.
*/
int* convertDecToBin(int decimal) {
    // Allocate memory for the binary array
    int* binaryArray = malloc(NUMBER_OF_BITS * sizeof(int));

    // Initialize the binary array elements to 0
    for (int i = 0; i < NUMBER_OF_BITS; i++) {
        *(binaryArray + i) = 0;
    }

    // Convert decimal to binary
    int i = NUMBER_OF_BITS - 1;
    while (decimal > 0 && i >= 0) {
        *(binaryArray + i) = decimal % 2;
        decimal /= 2;
        i--;
    }

    return binaryArray;
}
/*
   This function converts a binary array into a decimal integer. 
   It takes an integer array binaryArray as input, where each element represents 
   one binary bit, and returns the decimal equivalent.
   
   Input:
   - binaryArray: An array of integers representing a binary number.
   
   Output:
   - Returns the decimal equivalent of the binary number.
*/
int convertBinToDec(int *binaryArray) {
    int decimal = 0;
    int power = 1; // Initialize the power of 2

    // Loop through the binary array from right to left
    for (int i = NUMBER_OF_BITS - 1; i >= 0; i--) {
        decimal += (*(binaryArray + i) * power);
        power *= 2; // Double the power of 2 for each bit position
    }

    return decimal;
}
/*
   This function converts a decimal integer into a hexadecimal array. 
   It takes an integer decimal as input and returns a dynamically allocated 
   array of integers representing the hexadecimal representation of the decimal number.
   
   Input:
   - decimal: The decimal integer to be converted.
   
   Output:
   - Returns a pointer to the hexadecimal array.
*/
int* convertDecToHex(int decimal) {
    // Allocate memory for the hex array
    int* hexArray = malloc(NUMBER_OF_HEX_DIGITS * sizeof(int));
    
    // Initialize the hex array elements to 0
    for (int i = 0; i < NUMBER_OF_HEX_DIGITS; i++) {
        *(hexArray + i ) = 0;
    }

    // Convert decimal to hexadecimal
    int i = NUMBER_OF_HEX_DIGITS - 1;
    while (decimal > 0 && i >= 0) {
        *(hexArray + i) = decimal % 16; // Get the remainder as the hex digit
        decimal /= 16; // Divide by 16 to move to the next digit
        i--;
    }

    return hexArray;
}
/*
   This function converts a hexadecimal array into a decimal integer. 
   It takes an integer array hexArray as input, where each element represents 
   one hexadecimal digit, and returns the decimal equivalent.
   
   Input:
   - hexArray: An array of integers representing a hexadecimal number.
   
   Output:
   - Returns the decimal equivalent of the hexadecimal number.
*/
int convertHexToDec(int *hexArray) {
    int decimal = 0;
    int power = 1; // Initialize the power of 16

    // Loop through the hex array from right to left
    for (int i = NUMBER_OF_HEX_DIGITS - 1; i >= 0; i--) {
        decimal += (*(hexArray + i) * power);
        power *= 16; // Multiply by 16 for each hex digit position
    }

    return decimal;
}

int* convertDecToBin(int decimal);
int convertBinToDec(int* binaryArray);
int* convertDecToHex(int decimal);
int convertHexToDec(int* hexArray);

#endif
