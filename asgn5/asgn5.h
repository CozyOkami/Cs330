#ifndef ATOI_CS330_H
#define ATOI_CS330_H

#include <stdio.h>
#include <stdlib.h>

int atoi_cs330(const char *str) {
    if (str == NULL || *str == '\0') {
        return 0;
    }

    int result = 0;
    int sign = 1;
    int i = 0;

    // Check for the sign of the number
    if (str[i] == '-') {
        sign = -1;
        i++;
    }

    // Convert the string to an integer
    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + (str[i] - '0');
        } else {
            // Handle non-numeric characters
            printf("Invalid character: %c\n", str[i]);
            return 0;
        }
        i++;
    }

    return sign * result;
}

char *itoa_cs330(int num) {
    if (num == 0) {
        char *str = (char *)malloc(1 * sizeof(char));
        str[0] = '\0';
        return str;
    }

    int is_negative = 0;
    if (num < 0) {
        is_negative = 1;
        num = -num;
    }

    int temp = num;
    int num_digits = 0;
    
    while (temp > 0) {
        temp /= 10;
        num_digits++;
    }

    char *str = (char *)malloc((num_digits + is_negative + 1) * sizeof(char));

    if (is_negative) {
        str[0] = '-';
    }

    int i = num_digits + is_negative - 1;
    while (num > 0) {
        str[i] = '0' + (num % 10);
        num /= 10;
        i--;
    }

    str[num_digits + is_negative] = '\0';

    return str;
}

#endif
