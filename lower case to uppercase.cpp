#include<stdio.h>
#include<ctype.h>
#define size  20
int  main()
{
	char letter [size];
	int count;
	for(count=0;count<size;count++)
	letter[count]=getchar();
	for(count=0;count<size;count++)
	putchar(toupper(letter[count]));
}
