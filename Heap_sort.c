#include<stdio.h>
#include<stdlib.h>

void max_heapify();
void build_max_heap();
void heapSort();

int arr[100];
int n,i,largest,left,right,temp;

void max_heapify(int *arr, int n, int i) 
{
    largest = i;
    left = 2 * i + 1;
    right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
    largest = left;
    if (right < n && arr[right] > arr[largest])
    largest = right;
    if (largest != i) {
        temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        max_heapify(arr, n, largest);
    }
}
void build_max_heap(int *arr, int n)
{
    for (i = n / 2 - 1; i >= 0; i--)
    max_heapify(arr, n, i);
}
void heapSort(int *arr, int n)
{
    build_max_heap(arr, n);
    for (i = n - 1; i >= 0; i--)
    {
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        max_heapify(arr, i, 0);
    }
}
int main()
{
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    } 
    printf("Given array is \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    } 
    printf("\n");
    heapSort(arr, n);
    printf("Sorted array is \n");
    for (i = 0; i < n; i++) 
    {
        printf("\n%d", arr[i]);
    }
    printf("\n");
}