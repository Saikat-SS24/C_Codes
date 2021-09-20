/* Write a program to display the sum of the peripheral elements of a given square matrix of size N [ a non-zero integer*/
#include<stdio.h>
int main()
{
    int N,i,j,s;
    scanf("%d", &N);
    int a[N][N];
    for (i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            scanf("\n%d", &a[i][j]);
        }
    }
    s=0;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            if(i==0 || i==N-1)
            {
                s=s+a[i][j];
            }
            else if(j==0 || j==N-1)
            {
                s=s+a[i][j];
            }
        }
    }
    if(N==0)
    {
        printf("Invalid size");
    }
    else
    {
        printf("%d",s);
    }
}
