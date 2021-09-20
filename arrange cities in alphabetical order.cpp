/*Write a program to store the name of 5 cities (BOMBAY, ALIGARH, CUTTACK, CALCUTTA,MADRAS) 

arrange those names in alphabetical order*/
#include<stdio.h>
#include<string.h>
int main()
{
    int i , j , count = 4;
    char str[25][25], temp[25];   /* variable declaration*/
    for(i = 0; i <= count; i++)
       scanf("%s", str[i]);       /* input*/
    for( i = 0; i <= count; i++)
       for(j = i + 1; j <= count; j++)
       {
           if(strcmp(str[i], str[j]) > 0)
           {
               strcpy(temp, str[i]);     /* selection sort to swap cities alphabetically*/ 
               strcpy(str[i], str[j]);
               strcpy(str[j], temp);
           }
       }
       
    for(i = 0; i <= count; i++)  /* output*/
       puts(str[i]);
       
    return 0;   
}
