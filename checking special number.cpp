/*Write a program to enter a number and check whether the number is a special number or not 
(A number is said to be special number if the some of the factorial of the digits is equal to the original number)*/
#include<stdio.h>
void main()
{
	int n,no,r,p,i,s;
	scanf("%d",&n);
	no=n;
	s=0;
	while(n>0)
	{
		r=n%10;
		p=1;
		n=n/10;
		for(i=1;i<=r;i++)
		{
			p=p*i;
		}
		s=s+p;
	}
	if(s==no)
	{
		printf("special number");
	}
	else
	{
		printf("not special number");
	}
}
