#include <stdio.h>

void cubeOfodd (int n){
    for(int i = 1; i < n; i += 2 ){
        printf(i*i*i);
    }
}

void introToCS330 (int n){
    if (n % 7 == 0 && n % 3 == 0){
        printf("UAB CS 330");
    } if (n % 7 == 0){
        printf("UAB");
    } if (n % 3 == 0){
        printf("CS");
    } if (n > 1 && n != 3 && n != 7){
        for (int i = 2; i < n; i += 1) {
            if (n % i == 0){
                printf("Go Blazers");
            }
        }
    } else{
        printf(n*n*n);
    }
}