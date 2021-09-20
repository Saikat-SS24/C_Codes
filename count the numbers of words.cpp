/*Write a program in C using File to accept a sentences and count the number of words and print.*/
/*At first you have to take an input sentences as a string and write that string on a text file using write mode and then close file*/
/* and then open that text file in read mode and then read the string from that file and then count how many words are present in the given sentences and then print*/
#include<stdio.h>
#include<stdlib.h>
#define OUT   0
#define IN   1
unsigned countwords(char *str)
{
    int state = OUT;
    unsigned wc = 0;   /* word count*/
    
    /* scan all charecters*/
    while (*str)
    {
        /* if next character is a separator state as out*/
        
        if (*str == ' ' || *str == '\n' || *str == '\t')
            state = OUT;
            
            /*if next character is not a word separartor and state is out then set the state as in and increment word limit*/
            
            
            else if (state == OUT)
            {
                state = IN;
                ++wc;
            }
            
            /* move to the next character*/
            ++str;
    }
    
    return wc;
}

int main(){
    char sentence[1000];
    
    /* ceating file pointer */
    FILE *fptr;
    
    /* opening all file in writing mode */
    fptr = fopen("program.txt", "w");
    
    /* exiting the programme*/
    if (fptr == NULL){
        printf("Error!");
        exit(1);
    }
    printf("Enter a sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);
    fprintf(fptr, "%s", sentence);
    fclose(fptr);
    printf("%u", countwords(sentence));
    return 0;
}
