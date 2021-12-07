/*. Given an array of size N and an integer M where M is smaller than size of array,*/
/*find the Mth smallest and largest element in the array. All array elements are distinct*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size, m , i, j, temp;
    int *array;
    scanf("%d", &size);            /* taking the array size*/
    array = (int*)malloc(size * sizeof(int));  /* allocating the size of the array in memory in runtime*/
    for(i = 0;i < size; i++)
    {
        scanf("%d", &array[i]); /* taking the array elements*/
    }
    scanf("%d", &m);
    for(i = 0; i < size-1; i++)
    {
        for(j = 0;j < size-i-1; j++)   /* checking the largest and smallest value in mth position */
        {
            if(array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    printf("\n%d \n%d", array[m-1], array[size-m]); /* printing the largest and smallest elements*/
    return 0;
}
