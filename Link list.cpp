#include <stdio.h>
#include<stdlib.h>
#define  null   0
struct node{
	int data;
	struct node *next;
}*head;
void create(){
	struct node *ptr, *new1;
	int x;
	printf("\n Enter a number  ");
	scanf("%d",&x);
	new1 = (struct node*)malloc(sizeof(struct node));
	new1 -> data = x;
	new1 -> next = null;
	if(head == null)
	 head = new1;
	else{
		ptr =  head;
		while(ptr->next!=null)
		 ptr =  ptr -> next;
		ptr ->next = new1;
	}
}
void display(){
	struct node *ptr;
	if(head==null)
	 printf("\n\t\t\tLink list doesn't exist");
	else{
		ptr = head;
		printf("\n\t\t\t");
		while(ptr!=null)
		 {
		 	printf("%d, ", ptr->data);
		    ptr = ptr -> next;
		 }
	}
}
int main(){
	int ch;
	head =  null;
	while(1){
		printf("\n 1. Create\n 2. Dsipaly\n 3. Exit\n Enter your choice  ? ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				create();
			break;
			case 2:
				display();
			break;
			case 3:
				exit(0);
			deafult:
				printf("\n\t\t\tWrong input!!!");
			break;
		}
	}
}
