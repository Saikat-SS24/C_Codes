/*A lucky number is a number whose digits when added continuously till a single digit is obtained is equal to 1. 

Write a program to input a number and check whether it is a lucky number or not*/
#include <stdio.h>
int main()
{
    int a, x, b;
    scanf("%d", &a);
    x = a;
    while(a/10 != 0){
        b = 0;
        while(a != 0){
            b += a%10;
            a = a/10;
            
        }
        a = b;
    }
   
    if(b == 1){
        printf("Lucky Number");
    }
    else{
        printf("Not Lucky Number");
    }
    return 0;
}
