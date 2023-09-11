#include <stdio.h>
#ifndef __asgn2__
#define __asgn2__
/*This just takes a number n and then prints the cube of every odd number up to it.
This takes the positive interger n.
returns void.
*/
void cubeOfodd (int n){
    for(int i = 1; i < n; i += 2 ){
        int cube = i*i*i;
        printf("%i",cube);
    }
}
/* This takes a number, then runs through a list of if statements to check if it is divisible by 3 and 7, 3 or 7, then if it is
prime or not. If it is none of those it printss the cube.
This takes a positive integer "n"
This returns void. 
*/
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
        int cube = n*n*n;
        printf("%i",cube);
    }
}
/* This takes a number and checks every value under it to see if it is a power of 2. If it is it prints HELLO and if 
it doesn't, it prints the number itself.
It accepts any positive integer.
It returns void.
*/
void printHello(int n){
    for(int i = 0; i <= n; i++){
        if((i & (i - 1)) == 0){
            printf("%s","HELLO");
        } else{
            printf("%i",i);
        }
    }
}
/* This calculates the surface area of a room and then finds how many gallons you need to paint that room.
It accepts any integer.
It returns the amount of gallons needed to cover the surface area of the room.
*/
int paintGallons(int length, int width, int height){
    int surfaceArea = 2*(width*length + height*length +height*width);
    int gallons = surfaceArea / 400;
    return gallons;
}
/*This runs a series of logic to check if a student passes or fails.
This accepts 3 integers avg_exams, avg_hw, and attendance.
This returns void.
*/
void grader(int avg_exams, int avg_hw, int attendance){
    if(attendance > 20 && avg_exams > 70 && avg_hw > 70 && (avg_exams > 85 || avg_hw > 85 )){
        printf("PASS");
    } else{
        printf("FAIL");
    }
}


#endif 