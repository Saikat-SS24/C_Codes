/* Given a list of size N and an integer M. Find if there's a triplet in the array which sums up to the given integer M*/
/*Time Complexity: O(N2)*/
/*Auxiliary Space: O(1)*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m,i,j,k;
    int c = 0;
    int*a;
    
    scanf("%d", &n);
    scanf("%d", &m);
    a = (int*)malloc(n*(sizeof(int)));  /*allocating the array size in the memory in runtime*/
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);     /* taking the array elements*/
    }
    for(i = 0; i < n ; i++)
    {
        for(j = (i+1); j < n; j++)
        {
            for(k=(j+1); k < n; k++)
            {
                if((a[i]+a[j]+a[k]) == m)   /*checking the condition for  matching with the input number*/
                {
                    c++;
                }
            }
        }
    }
    
    printf("%d",c);  /* printing the number of triplets*/
    
    return 0;
}
