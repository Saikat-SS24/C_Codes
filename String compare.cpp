#include<stdio.h>
#include<string.h>
int strcompare(char str1[],char str2[])
{
	int i,length,length1,length2;
	length1=strlen(str1);
	length2=strlen(str2);
	length=(length1<length2)? length1:length2;
	for(i=0;i<=length;i++)
	     if(str1[i]<str2[i])
	         return -1;
	     else if(str1[i]>str2[i])
	         return 1;
	return 0;
}
main()
{
	int status;
	char str1[1000],str2[1000];
	
	printf("enter first string: ");
	gets(str1);
	printf("enter second string: ");
	gets(str2);
	status=strcmp(str1,str2);
	if(status==-1)
	   printf("first string lesser than second string\n");
    else if(status==1)
       printf("first string is greater than second string\n");
    else
       printf("Both strings are equal");
}
