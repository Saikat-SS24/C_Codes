/*Given an array of N non-negative integers – where each element in the array is number of blocks in a pillar. */
/*Assume height and width of each block is 1, calculate how much rain water can be accumulated between the pillars.*/
/*Time Complexity: O(N)*/
/*Auxiliary Space: O(N)*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,n;
    int c=0,max=0,max2=0;
    int*a;
    
    scanf("%d", &n);
    
    a = (int*)malloc(n*(sizeof(int)));
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    for(i = 0; i < n; i++)     /* taking the array input*/
    {
        if(a[i] > max)       /* checking the max*/
        {
            max = a[i];
        }
    }
    
    for( i = 0; i < n ; i++)   /* checking the second max*/
    {
        if(a[i] > max2 && a[i] < max)
        {
            max2 = a[i];
        }
    }
    
    for(i = 0; i < n; i++)
    {
        if(a[i] < max2)
        {
            c = (c + (max2-a[i]));
        }
    }
    
    printf("%d",c);   /* printing the nswers */
    
    return 0;
    
}
