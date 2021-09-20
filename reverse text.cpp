/*read a line of text and write it out backwards using recursion*/
#include<stdio.h>
#define EOLN '\n'
void reverse(void);     /* function prototype*/
int main()
{
	printf("\nEnter a line of text below");
	reverse();
}
void reverse(void)
{
	char c;                        /* read the lineof characters and write it in backwards*/
	if((c=getchar())!= EOLN)
	reverse();
	putchar(c);
	return;
}
