/* Write a program in c that will reverse a string using stack as an auxiliary data structure.*/
#include <stdio.h>
#include <string.h>

char pop(char array[], int point)           /* declaring the function to popping out the last character*/
{
    char res = array[point];
    return res;
}


int main()
{
    int point;
    char str[40];   
    fgets(str, 40, stdin);      /*taking the string*/
    int size = strlen(str);
    point = size-1;
    for(int i = 0;i<size;i++)                           
    {
        char c = pop(str, point);        /*popping out the pointed charcters*/
        printf("%c", c);                 /*printing thecharcters by popping  mathod*/
        point --;                               
    }
    return 0;
}