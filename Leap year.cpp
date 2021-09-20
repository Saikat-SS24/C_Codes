/*Write a program to check whether the input yerar is leap year or not */
#include<stdio.h>
int main()
{
    int year;
    printf("\nEnter a year");
    scanf("%d",&year);
    if(((year%4==0)&&(year%100!=0))||(year%400==0))
    printf("\nLeap Year");
    else
    printf("\nNot Leap Year");
    
    return 0;

    
}
