/*Write a program in C that will check if the parentheses/Square brackets/Curly brackets are well formed*/
/* [ i.e. the pairs and the orders of “{“, “}”, “(“, “)”, “[“, “]” are correct ] in an infix expression. Print 1 if the given infix*/
/*expression has well balanced brackets otherwise print 0.*/
#include <stdio.h>
#include <string.h>
int main()
{
    int point;
    char str[40];
    char stack[40];              /*initialising the stack*/
    fgets(str, 20, stdin);
    int size = strlen(str);
    point = -1;
    for(int i = 0;i<size;i++)
    {
        if(str[i] == '(' || str[i] == '{' || str[i] == '[')  /*pushing to stack if bracket is being opened*/
        {
            point ++;
            stack[point] = str[i];
        }
        else if(str[i] == ')' || str[i] == '}' || str[i] == ']')  /*popping the  stack if bracket is being closed*/
        {
            point--;                                                    
        }
    }
    if (point == -1)                        /*True if the stack has no element*/
    {
        printf("1");
        return 0;
    }
    printf("0");                   /*False if the stack has elementsy*/
    return 0;
}