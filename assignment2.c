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

void printHello(int n){
    char hello[n];
    for(int i = 0; i <= n; i++){
        if(i & (i - 1) == 0){
            hello[i] = "HELLO";
        } else{
            hello[i] = i
        }
    } for (int i = 0; i < sizeOf(hello); i++){
        printf(hello[i]);
    }
}

int paintGallons(int length, int width, int height){
    int surfaceArea = 2*(width*length + height*length +height*width);
    int gallons = surfaceArea / 400;
    return gallons;
}