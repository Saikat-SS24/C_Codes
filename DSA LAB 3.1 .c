/*You are given an expression (postfix). The expression may contain multiple digits as well as single digit with different operators.*/
/*Each of the digits (single or multiple) and operators are separated either by “,” or “ “(space). Your task is to find the evaluation */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int stack[30];
int top = -1;

void push(int x)
{
    stack[++top] = x;
}

int pop()
{
    return stack[top--];
}

int main()
{
    char exp[50];
    char num[50];
    int going = 0;
    int res = 0, point, k=0, exp2, op1, op2, resTemp;           /*declaring*/
    fgets(exp, sizeof(exp), stdin);
    int i = 0;
    while(exp[i] != '\0')           /*checking the condition*/
    {
        
        if(going)                                               /* if a number is detected*/
        {
            if(exp[i] == ' ' || exp[i] == ',' || exp[i] == '\0')    /* if the numbers are ended*/
            {
                going = 0;
                resTemp = atoi(num);
                push(resTemp);
                k = 0;
                memset(num, 0, 5);
            }
            else
            {
                num[k] = exp[i];
                k++;
            }
        }
        else if(exp[i] != ' ' && exp[i] != ',' && exp[i] != '*' && exp[i] != '/' && exp[i] != '+' && exp[i] != '-')    /* if number begins*/                                         
        {
            going = 1;
            k = 0;
            num[k] = exp[i];
            k++;
        }
        else if(exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/')   /* if any operator found*/
        {                                                                   
            op2 = pop();            /* poppping out the ooperators*/
            op1 = pop();
            if(exp[i] == '+')
            {
                exp2 = op1+op2;
            }
            else if(exp[i] == '-')
            {
                exp2 = op1-op2;
            }
            if(exp[i] == '*')
            {
                exp2 = op1*op2;
            }
            if(exp[i] == '/')
            {
                exp2 = op1/op2;
            }
            
            push(exp2);                                             
        }
        i++;
    }
    res = pop();                       /* popping out the last item*/                             
    printf("\n%d", res);              /* printing the answer*/                                
    return 0;
}