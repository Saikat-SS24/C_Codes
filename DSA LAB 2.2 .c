/* Write a program in c that will reverse all words of a given line using stack as an auxiliary data structure.*/
#include <stdio.h>
#include <string.h>
int main()
{
    int cap,top;
    int i;
    char n[1000];
    scanf("%[^\n]s",n);  /* taking the input*/
    cap = strlen(n);
    char a[cap];
    n[(strlen(n))]=' ';
    top = -1;
    
    for(i=0;i<strlen(n);i++)
    {
        char ch = n[i];
        if(ch!=' ')        /* storing the elements*/
        {
            if(top<cap-1)  /*pushing the characters into stack*/
            {
                a[++top] = ch;
            }
            else
            {
                printf("\nStack Overflow");        /* printing overflow after checking condition*/
            }
        }
        else
        {
            while(top>=0)
            {
                if(top==-1)
                {
                    printf("\nStack Underflow");   /* printing underflow after checking the condition*/
                    return -99;
                }
                else
                {
                    printf("%c",a[top--]);   /*printing the characters by popping method*/
                }
            }
            printf(" ");
        }
    }
    
    return 0;
}