/*You are given an integer K and a queue of integers. You have to reverse the order of the first K elements of the queue, leaving the other elements in the same relative order.
Only following standard operations are allowed on queue.
            enqueue(x): Add an item x to rear of queue 
            dequeue (): Remove an item from front of queue
size (): Returns number of elements in queue.
            front (): Finds front item.
In the input section, the first line contains the number of elements followed by value of k. The second line contains the elements of queue separated by spaces.
Expected Time Complexity : O(n) 
Constraints:
1 <= N <= 1000
1 <= K <= N
Sample input:
5 3 
1 2 3 4 5
output
3 2 1 4 5*/

#include <stdio.h>

int front = -1;          /*global variablesd*/
int rear = -1;
int array[50];
int size = 50;
int stack[50];
int top = -1;


void Push(int data)     /* pushing data into stack*/
{
    if (top + 1 > size)
        {
            printf("Stack Overflow!");
        }
        else
        {
            stack[top+1] = data;
            top++;
        }
}

void Pop()
{
    if(top-1 > -1)
    {
        top --;
    }
}

int Peek()
{
    return stack[top];
}

void Dequeue()           /* performing queue operations and checking the condition*/
{
    if(front>rear)
    {
        front = -1;
        rear = -1;
        printf("Queue is empty");
    }
    else
    {
        front++;
    }
}


int Front()
{
    return array[front];
}


void Enqueue(int data)
{
    if(rear == size-1)
    {
        printf("queue overflow");
        return;
    }
    else if(front == -1 && rear == -1)
    {
        front ++;
        rear ++;
        array[rear] = data;
    }
    else
    {
        rear++;
        array[rear] = data;
    }
}


int main()
{
    int size = 50;
    int len, lim, temp;
    scanf("%d", &len);
    scanf("%d", &lim);
    if(lim>len)
    {
        printf("INVALID INPUT");
        return 0;
    }
    for(int i = 0;i<len;i++)         /*filling up the queue*/
    {
        scanf("%d", &temp);
        Enqueue(temp);
    }
    for(int j = front;j<lim;j++)             /*pushing the  j elements into stack*/
    {
        int temp1 = Front(array, &front, &rear);
        temp1 = Front();
        Dequeue();
        Push(temp1);
    }
    for(int k = 0;k<lim;k++)    /*reversing the elements and storing the elements in temp2*/
    {
        int temp2 = Peek();
        printf("%d ", temp2);
        Pop();
    }
    for(int l = front;l<=rear;l++)      /*printing the other elements*/
    {
        int temp3 = Front();
        Dequeue();
        printf("%d ", temp3);
    }
}