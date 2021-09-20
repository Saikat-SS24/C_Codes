/*calculate the factorial of integer using recursion*/
#include<stdio.h>
long int factorial(int n);
int main()
{
	int n;
	long int factorial(int n);
	printf("\nEnter a number");
	scanf("%d", &n);
	printf("\nThe factorial is %d", factorial(n));
}
long int factorial(int n)
{
	if(n<=1)
	  return(1);
	else
	  return(n*factorial(n-1));
}
