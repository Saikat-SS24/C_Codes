/*Write a program in C to sort the numbers using Insertion Sort Algorithm user defined function. Array must be created using dynamic memory concept. The sorted value must be printed using printarray() function.*/
/*Output of this program as per users choice. For print the value of an array user can give their choice as pass number or steps number outer loops*/
/*if user gives 2 then you have to print the partially sorted value after 2nd pass. If user gives 3 then you have to print the partially sorted value after 3rd pass.*/
#include<stdlib.h>

void insertion(int *a, int c);
void printarray(int *a, int n);
int main()
{
    int *a,n,i,c;
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));    /*dynamic allocaion*/
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&c);
    if(c<n)
    {
        insertion(&a[0],c);
        printarray(&a[0],n);
    }
    return 0;
}
void insertion(int *a, int c)          /*insertion sort*/
{
    int i,j,temp;
    for(i=1;i<=c;i++)
    {
        temp = a[i];
        j=(i-1);
        while(j>=0 && a[j]>temp)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = temp;
    }
}
void printarray(int *a, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

