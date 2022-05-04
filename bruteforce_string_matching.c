#include<stdio.h>
#include<string.h>

void bruteforce();

int ls,lp,j,k,i,j;
int flag;
char str[100],pat[100];

void bruteforce(char* str, char* pat)
{
    ls = strlen(str);
    lp = strlen(pat);
    for(int i = 0; i <= ls-lp; i++)
    {
        k = i;
        j = 0;
        while(str[k] == pat[j] && j < lp)
        {
            k++;
            j++;
        }
        if(j == lp)
        {
            printf("Pattern  found at index %d \n", i);
            flag = 1;
        }
    }
    if(flag == 0)
      printf("Pattern not found");
}
int main()
{
    printf("Enter the string: ");
    gets(str);
    printf("\nEnter the pattern: ");
    gets(pat);
    bruteforce(str , pat);
	return 0;
}