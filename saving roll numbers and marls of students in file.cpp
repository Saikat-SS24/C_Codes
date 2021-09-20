/*It is required to enter in a file named "result.txt" the roll number of certain students and the marks obtained by them in physics, chemistry,mathematics*/
/*Write a program to read the information from the keyboard and write it to the file and put the total marks also (after addition)*/
#include<stdio.h>

int main()
{
    int i;
    FILE *fp;
    struct stu   /* structure*/
    {
        int roll, phy , chem , math , tot;
    };
    struct stu s[3];
    
    fp=fopen("result.txt","w");   /*writing the file*/
    for(i = 0; i < 3; i++)
    {
        scanf("%d %d %d %d\n", &s[i].roll,&s[i].phy,&s[i].chem,&s[i].math);
        s[i].tot=(s[i].phy+s[i].chem+s[i].math);
        fwrite(&s[i], sizeof(s[i]),1,fp);
    }
    fclose(fp);
    
    fp=fopen("result.txt","r");  /*reading from file*/
    for(i = 0; i < 3; i++)
    {
        fread(&s[i], sizeof(s[i]),1,fp);
        printf("%d %d %d %d %d\n",s[i].roll,s[i].phy,s[i].chem,s[i].math,s[i].tot);
    }
    fclose(fp);
    
    return 0;
}
