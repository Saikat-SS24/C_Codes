/*Write a program to take some Atoms's name, symbol  and atomic no   as input. after that arrange them according to their atomic no */
#include<stdio.h>
struct atoms           /*decreating structure*/
{
    char name[10];
    char symbol[2];
    int num;
};
int main()
{
    int i , j;
    struct atoms a[3], temp;
    for(i = 0; i < 3; i++)       /*input of struct variables*/
    {
        scanf("%s", a[i].name);
        scanf("%s", a[i].symbol);
        scanf("%d", &a[i].num);
    }
    for(i = 0; i < 2; i++)        /* sorting with respect to atomic number*/
    {
        for(j = 0; j < 2-i; j++)
        {
            if(a[j].num > a[j+1].num)
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;              
            }
        }
    }
    for(i = 0; i < 3; i++)
    {
        printf("\n%s %s %d", a[i].name, a[i].symbol, a[i].num);     /* printing output*/
    }
    return 0;
}
