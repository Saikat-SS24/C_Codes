/*You are providing the length, breadth and height of a cuboid. */
/*Your task is to divide the given cuboid in minimum number of cubes such that size of all cubes is same and sum of volumes of cubes is maximum by using a suitable user defined function. */
/* input section:

       length, breadth and height of cuboid are given space separated respectively in a single line.

     output section:

       In a single line the size of each cube along with number of cubes are presented as output with a single space in between them.*/
#include<stdio.h>

int main()
{
    int l,b,h;
    int small;
    int i;
    scanf("%d %d %d",&l, &b, &h);
    if(l<b)
    {
        if(l<h)
        {
            small = l;
        }
        else
        {
            small = h;
        }
    }
    else 
    {
        if(b<h)
        {
            small = b;
        }
        else
        {
            small = h;
        }
    }
    for(i=small;i>=1;i--)
    {
        if((l%i==0) && (b%i==0) && (h%i==0))
        {
            break;
        }
        
    }
    printf("%d %d",i, ((l*b*h)/(i*i*i)));
    
    return 0;
}       
