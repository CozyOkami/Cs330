#include <stdio.h>
#ifndef __asgn2__
#define __asgn2__

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
            hello[i] = i;
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

void grader(int avg_exams, int avg_hw, int attendance){
    if(attendance > 20 && avg_exams > 70 && avg_hw > 70 && (avg_exams > 85 || avg_hw > 85 )){
        printf("PASS");
    } else{
        printf("FAIL");
    }
}

int main(){
    int n;
    int func;
    int length;
    int width;
    int height;
    int avg_exams;
    int avg_hw;
    int attendance;

    printf("which function would you like to run?");
    printf("1 for cubeOfodd /n");
    printf("2 for introToCS330/n");
    printf("3 for printHello/n");
    printf("4 for paintGallons/n");
    printf("5 for grader");
    scanf("%d", &func);
    if(scanf("%d", &func) == 1){
        printf("please enter 'n' for problem 1");
        scanf("%d", &n);
        cubeOfodd(n);
    }if(scanf("%d", &func) == 2){
        printf("please enter 'n' for problem 2");
        scanf("%d", &n);
        introToCS330(n);
    }if(scanf("%d", &func) == 3){
        printf("please enter 'n' for problem 3");
        scanf("%d", &n);
        printHello(n);
    }if(scanf("%d", &func) == 4){
        printf("please enter length");
        scanf("%d", &length);
        printf("please enter width");
        scanf("%d", &length);
        printf("please enter height");
        scanf("%d", &height);
        paintGallons(length, width, height);
    } if(scanf("%d", &func) == 5){
        printf("please enter exam average");
        scanf("%d", &avg_exams);
        printf("please enter homework average");
        scanf("%d", &avg_hw);
        printf("please enter attandance");
        scanf("%d", &attendance);
        grader(avg_exams, avg_hw, attendance);
    }else{
        printf("Sorry I didn't get that");
    } return 0;
}