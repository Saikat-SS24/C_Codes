/*Write a program to accept a sentence and count how many palindrome words are there and print those palindrome words*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char * str rev(char arr[10])
{
    int n=strlen(arr), i , j , m;
    char c , *str;
    str=(char*)malloc(n * sizeof(char));
    strcpy(str, arr);
    m=n/2-1;
    for(i = o; i <= m; i++)
    {
        c=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=c;
    }
    str[n]='\0';
    return str;
}

int main()
{
    char str[100], w1[10], w2[10];
    int n, i, c=0;
    scanf("%[^\n]%c", str);
    for(i = 0, j=0; str[i]!='\0'; i++)
    {
        if(isalnum(str[i]))
        {
            w1[j]
        }
    }
}
