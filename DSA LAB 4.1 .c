/* Write a menu driven program in C to implement the basic Circular Queue operations */
/*[ menu options are INSERTION, DELETION, DISPLAY, EXIT ] using ADT [ abstract data type ]*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 100

struct queue
{
	int data[MAX];
	int front;
	int rear;
};

struct queue s;

void deletion()
{
	int item;
	if((s.front==-1 && s.rear==-1) || ((s.rear+1)%MAX)==((s.front)%MAX))
	{
		printf("EMPTY QUEUE ");
		return;
	}
	                               /*else if(s.front==s.rear)*/
	                               /*{*/
	                               /*	if s.front=-1;*/
                                 	/*	 ifs.rear=-1;*/	
                                    
	else if(s.rear==MAX-1 && s.front==MAX-1)
		{
			s.front=1;
			printf("\n%d",s.data[s.front]);
		}
	else
	{
		                              /* declaring item=s.data[s.front];*/
		                              /*  declaring s.front=(s.front+1)%MAX;*/
		printf("%d",s.data[s.front]);
		s.front=(s.front+1)%MAX;
	}	
}

void insertion()
{
	int n;
	if(s.front==(s.rear+1)%MAX)
	{
		printf("QUEUE FULL");
		exit(0);
	}
	else if(s.front==-1 && s.rear==-1)
	{
		s.front=0;
		s.rear=0;
		scanf("%d",&n);
		s.data[s.rear]=n;
	}
	else
	{
	    scanf("%d",&n);
		s.rear=(s.rear+1)%MAX;
		s.data[s.rear]=n;
	}
}

void display()
{
int c;
	if(s.rear==-1 && s.front==-1)
	{
		printf("EMPTY QUEUE");
	}
	else if(s.front==s.rear+1)
	{
		for(c=s.rear;c<=s.front+3;c++)
		{
			printf("%d ",s.data[c]);
		}
	}
		else
	{
		for(c=s.front;c<=s.rear;c++)
		{
			printf("%d ",s.data[c]);
		}
	}
}	


int main()
{
int c;
s.front=-1;
s.rear=-1;
	while(1)
	{	scanf("%d",&c);
		switch(c)
		{
			case 1:insertion();
				break; 
			case 2:deletion();
				break;
			case 3:display();
				break;
			case 4:exit(0);
				break;
		}
	}
}