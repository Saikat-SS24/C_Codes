/*Pascal's Triangle is a triangular array of the binomial coefficients. Write a function that takes an integer value N*/
/*[ a non-zero positive integer less than 100] as input and prints first N lines of the Pascal’s triangle. Following are the first 6 rows of Pascal’s Triangle. */
#include<stdio.h>
int main()
{
    int i , j , n , var = 1;
    int array[100][100];            /* taking input*/
    scanf("%d", &n);
    if(n>100 || n<=0)
    {
        printf("Invalid size");     /* for checking invalid id*/
        return 0;
    }
    for(i=0; i<n ; i++)
    {
        for(j=0; j<n ; j++)
        {
            if(j == 0 || i == j)
            {
                array[i][j] = 1;
            }
        }
    }
    for(i=2; i<n; i++)
    {
        for(j=1; j<i+1; j++)
        {
            array[i][j] = array[i-1][j-1] + array[i-1][j];     /* calculating the value*/
        }
    }
    for(i=0; i<n; i++)                                         /* printing output*/
    {
        for(j=0; j<i+1; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");                                       /* for printing new row*/
    }
    
    return 0;
}

