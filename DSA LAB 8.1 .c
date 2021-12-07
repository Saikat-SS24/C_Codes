#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
struct Node {
    int coeff;
    int pow;
    struct Node* next;
};



   struct Node* create_node(struct Node* head, int co, int exp)
{
    struct Node *temp, *flag;
                                                                  /*if polynomial empty. make the node the head node*/

    if(head == NULL)
    {
   	 temp = (struct Node*) malloc (sizeof(struct Node));
   	 temp->coeff = co;
   	 temp->pow = exp;
   	 temp->next = NULL;
   	 head = temp;
    }
    else
    {
   	                                                           /*else go to the last node and append*/
   	 temp = head;
   	 while(temp->next != NULL)
   		 temp = temp->next;
   	 flag = (struct Node *)malloc(sizeof(struct Node));
   	 flag->coeff = co;
   	 flag->pow = exp;
   	 flag->next = NULL;
   	 temp->next = flag;
    }

    return head;
}

                                                                           //adding two polynomial*/
struct Node* polyAdd(struct Node *p1, struct Node *p2, struct Node *sum)
{
                                                                          /*copy the two polynomial and initialize variable res to store the sum*/
    struct Node *poly1 = p1, *poly2 = p2, *res;

                                                                          /*if polynomial 2 is null, set polynomial 1 as the sum*/
    if(poly1 != NULL && poly2 == NULL)
    {
   	 sum = poly1;
   	 return sum;
    }

                                                                              /*if polynomial 1 is null, set polynomial 2 as the sum*/
    else if(poly1 == NULL && poly2 != NULL)
    {
   	 sum = poly2;
   	 return sum;
    }

                                                                        /*if both polynomials are non-empty*/
    while(poly1 != NULL && poly2 != NULL)
    {
   	                                                                      /*if the sum is empty, initialize sum with a node structure*/
   	                                                                     /*and set res equal to sum*/
   	 if(sum == NULL)
   	 {
   		 sum = (struct Node *)malloc(sizeof(struct Node));
   		 res = sum;
   	 }

   	                                                               /*add a new node structure at the end of res to store sum*/
   	 else
   	 {
   		 res->next = (struct Node *)malloc(sizeof(struct Node));;
   		 res = res->next;
   	 }

   	                                                           /*if exponent of current node of polynomial 1 is greater than that of polynomial 2*/
   	                                                            /*add it to the sum*/
   	 if(poly1->pow > poly2->pow)
   	 {
   		 res->coeff = poly1->coeff;
   		 res->pow = poly1->pow;
   		 poly1 = poly1->next;
   	 }

   	                                                      /*if exponent of current node of polynomial 2 is greater than that of polynomial 1*/
   	                                                     /*add it to the sum*/
   	 else if(poly1->pow < poly2->pow)
   	 {
   		 res->coeff = poly2->coeff;
   		 res->pow = poly2->pow;
   		 poly2 = poly2->next;
   	 }

   	                                                   /*if exponent of current node of polynomial 1 is equal to that of polynomial 2*/
   	                                                   /**add the sum of their co-efficient to the sum*/
   	 else if(poly1->pow == poly2->pow)
   	 {
   		 res->coeff = poly1->coeff + poly2->coeff;
   		 res->pow = poly1->pow;
   		 poly1 = poly1->next;
   		 poly2 = poly2->next;
   	 }
    }

                                                           /*if polynomial 1 is non-empty add the remaining nodes to the sum*/
    while(poly1 != NULL)
    {

   	 res->next = (struct Node *)malloc(sizeof(struct Node));;
   	 res = res->next;

   	 res->coeff = poly1->coeff;
   	 res->pow = poly1->pow;
   	 poly1 = poly1->next;
    }

                                                         /*if polynomial 2 is non-empty add the remaining nodes to the sum*/
    while(poly2 != NULL)
    {
   	 res->next = (struct Node *)malloc(sizeof(struct Node));;
   	 res = res->next;

   	 res->coeff = poly2->coeff;
   	 res->pow = poly2->pow;
   	 poly2 = poly2->next;
    }

                                                       /*set pointer of last node to null*/
    res->next = NULL;

                                                    /*return the head node of the sum*/
    return sum;
}

                                                    /* Display Linked list*/
void show(struct Node* node,int *detector)
{
    struct Node* ptr=node,*ptr1=NULL,*ptr2=ptr;
    int flag=1;
    if(ptr==NULL)
        printf("%d",0);
    else{

    while(ptr2->next!=NULL){
            if(ptr2->coeff!=0){
            flag=0;
            break;}
        ptr2=ptr2->next;
    }
    if(flag==1)
        printf("%d",0);


    while (ptr->next!= NULL) {


            if(ptr->coeff!=0){
                    if(ptr->coeff!=1&&ptr->coeff!=-1){
                printf("%d",ptr->coeff);}
                if(ptr->coeff==-1){
                        if(ptr->pow!=0)
                    printf("%c",'-');
                    else
                        printf("%d",ptr->coeff);}
            if(ptr->pow!=0){

                    if(*detector==1)
                    printf("y");
            else if(*detector==2)
                printf("x");
            else
                printf("a");
            if(ptr->pow!=1){
                printf("%d",ptr->pow);}
            }
            }
ptr1 = ptr->next;


            if (ptr1->coeff > 0) {
            if (ptr->next != NULL)
                printf("+");}


                ptr=ptr->next;
            }
            if(ptr->next==NULL){
                if(ptr->coeff!=0){
                    if(ptr->coeff!=1&&ptr->coeff!=-1){
                printf("%d",ptr->coeff);}
                if(ptr->coeff==-1){
                        if(ptr->pow!=0)
                    printf("%c",'-');
                    else
                        printf("%d",ptr->coeff);}
            if(ptr->pow!=0){

                    if(*detector==1)
                    printf("y");
            else if(*detector==2)
                printf("x");
            else
                printf("a");
            if(ptr->pow!=1){
                printf("%d",ptr->pow);}
            }
            }
            }

    }

}

void main(){
    struct Node *poly1=NULL;
struct Node *poly2=NULL;
struct Node *poly=NULL;



char ch1[50],ch2[50];

scanf("%s %s",ch1,ch2);

int k=0,m=0;
int detector;
while(ch1[k]!='\0'){

    if(ch1[k]=='y'||ch1[k]=='x'||ch1[k]=='a'){
            if(ch1[k]=='y')
            detector=1;
            else if(ch1[k]=='x')
                detector=2;
                else
                detector=3;

             int sum1=0,sum2=0;
        int i=k-1,j=k+1,p=0;

        if(ch1[i]=='+'||i<0)
            sum1=1;
        else if(ch1[i]=='-')
            sum1=-1;
        else{


            while(ch1[i]!='+'&&ch1[i]!='-'&&i>=0){
                sum1+=((int)pow(10,p))*(ch1[i]-'0');
                i--;
                p++;

            }
            p=0;
      if(ch1[i]=='-'){

            sum1=-1*sum1;
        }
    }
    if(ch1[j]=='+'||ch1[j]=='-'||ch1[j]=='\0')
        sum2=1;
    else{
      while(ch1[j]!='+'&&ch1[j]!='-'&&ch1[j]!='\0'){
                sum2=sum2*10+(ch1[j]-'0');
                j++;

            }}

         poly1=create_node(poly1,sum1,sum2);

        }




k++;
}

int no1=strlen(ch1)-1;

int flag1=0,p1=0,sum4=0;
while(ch1[no1]!='+'&&ch1[no1]!='-'){
    if(ch1[no1]!='y'&&ch1[no1]!='x'&&ch1[no1]!='a'){
        sum4+=((int)pow(10,p1))*(ch1[no1]-'0');
        flag1=1;
        no1--;
p1++;
    }
    else{
            sum4=0;
            flag1=0;
        break;}
}

if(ch1[no1]=='-')
    sum4*=-1;

if(flag1==1)
    poly1=create_node(poly1,sum4,0);







while(ch2[m]!='\0'){

    if(ch2[m]=='y'||ch2[m]=='x'||ch2[m]=='a'){
            int sum1=0,sum2=0;
        int i=m-1,j=m+1,p=0;
        if(ch2[i]=='+'||i<0)
            sum1=1;
        else if(ch2[i]=='-')
            sum1=-1;
        else{
            while(ch2[i]!='+'&&ch2[i]!='-'&&i>=0){
                sum1+=((int)pow(10,p))*(ch2[i]-'0');
                i--;
                p++;

            }
      if(ch2[i]=='-'){

            sum1=-1*sum1;
        }}
if(ch2[j]=='+'||ch2[j]=='-'||ch2[j]=='\0')
        sum2=1;
else{
      while(ch2[j]!='+'&&ch2[j]!='-'&&ch2[j]!='\0'){
                sum2=sum2*10+(ch2[j]-'0');
                j++;

            }}

            poly2=create_node(poly2,sum1,sum2);

        }



m++;
}



int no2=strlen(ch2)-1;


int flag2=0,p=0,sum3=0;
while(ch2[no2]!='+'&&ch2[no2]!='-'){
    if(ch2[no2]!='y'&&ch2[no2]!='x'&&ch2[no2]!='a'){
        sum3+=((int)pow(10,p))*(ch2[no2]-'0');
        flag2=1;
        no2--;
p++;
    }
    else{
            sum3=0;
            flag2=0;
        break;}
}
if(ch2[no2]=='-')
    sum3*=-1;

if(flag2==1)
    poly2=create_node(poly2,sum3,0);


poly=polyAdd(poly1,poly2,poly);
show(poly,&detector);



}