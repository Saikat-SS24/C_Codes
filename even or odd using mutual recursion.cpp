/*Write a program to check whether  a no is odd or even (using mutual recursion only*/
#include<stdio.h>
int odd(int n);
int even(int n);            /* using function prototype*/
    int odd(int n)
    {
        if(n == 0)
        {
            return 0;
        }
        return even(n-1);   /* recursive call */
    }
    int even(int n)
    {
        if(n == 0)
        {
            return 1;
        }
        return odd(n-1);
    }
    int main()
    {
        int num;
        scanf("%d", &num);   /* taking the input*/
        if(odd(num))
        {
            printf("odd");     /* printing the output*/
        }
        else
        {
            printf("even");
        }
        return 0;
    }
