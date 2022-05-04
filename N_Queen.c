#include<stdio.h>
#include<stdlib.h>

int place(int k, int i);

int* x;
int n, count = 0;

void nQueen(int k, int n)
{
    for(int i = 1; i<=n; i++)
    {
        if(place(k, i))
        {
            x[k] = i;
            if(k == n)
            {
                count++;
                for(int l = 1; l<=n; l++)
                {
                    printf("%d", x[l]);
                }
                printf("\n");
            }
            else
            nQueen(k+1, n);
        }
    }
}

int place(int k, int i)
{
    for(int j = 1; j<=k-1; j++)
    {
        if((x[j] == i) || (abs(x[j]-i) == abs(j-k)))
        return 0;
    }
    return 1;
}

int main()
{
    printf("Enter chessboard size: ");
    scanf("%d", &n);
    x = (int*)malloc(sizeof(int)*n);
    nQueen(1, n);
    printf("The number of solutions is %d", count);
    return 0;
}
