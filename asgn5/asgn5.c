#include <stdio.h>
#include "asgn5.h"

int main() {
    const char *str1 = "576";
    const char *str2 = "-576";
    const char *str3 = "abc";  // Invalid input

    int num1 = atoi_cs330(str1);
    int num2 = atoi_cs330(str2);
    int num3 = atoi_cs330(str3);

    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);
    printf("Number 3: %d\n", num3);

    char *str4 = itoa_cs330(576);
    char *str5 = itoa_cs330(-576);
    char *str6 = itoa_cs330(0);

    printf("String 4: %s\n", str4);
    printf("String 5: %s\n", str5);
    printf("String 6: %s\n", str6);

    free(str4);
    free(str5);
    free(str6);

    return 0;
}