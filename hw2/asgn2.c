#include <stdio.h>
#include "asgn2.h"

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