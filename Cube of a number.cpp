/* cube of a number using function*/
#include<stdio.h>
int cube (int);
int main()
{
	int n,a;
	printf("\nEnter a number");
	scanf("%d", &n);
	a=cube(n);
	printf("\nThe answer is %d", a);
}
int cube(int x)
{
	int y=x*x*x;
	return y;
}
