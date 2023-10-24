#include <stdio.h>
#include "asgn5.h"

int main() {
    const char *str1 = "576";
    const char *str2 = "-576";

    int num1 = atoi_cs330(str1);
    int num2 = atoi_cs330(str2);

    printf("Number 1: %d\n", num1);
    printf("Number 2: %d\n", num2);

    char *str4 = itoa_cs330(576);
    char *str5 = itoa_cs330(-576);

    printf("String 4: %s\n", str4);
    printf("String 5: %s\n", str5);

    free(str4);
    free(str5);

    return 0;
}