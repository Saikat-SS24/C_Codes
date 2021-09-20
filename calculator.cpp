#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,choice;
	printf("\nA for addition");
	printf("\nS for subtraction");
	printf("\nM for multiplication");
	printf("\nD for divission");
	printf("\nEnter your choice");
	
	switch(choice=getchar())
	{
		case 'a':
			printf("Enter two numbers");
			scanf("%d%d", &a,&b);
			c=a+b;
			printf("The answer is %d", c);
			break;
			
		case 's':
			printf("Enter two numbers");
			scanf("%d%d", &a,&b);
			c=a-b;
			printf("The answer is %d", c);
			break;
			
		case 'm':
			printf("Enter two numbers");
			scanf("%d%d", &a,&b);
			c=a*b;
			printf("The answer is %d", c);
			break;
			
		case 'd':
			printf("Enter two numbers");
			scanf("%d%d", &a,&b);
			c=a/b;
			printf("The answer is %d", c);
			break;
    }
    
    return 0;
}
		
		
			
			
	

