/*A futuristic company is building an autonomous car. The scientists at the company are training the car to perform reverse parking. To park, the car needs to be able to move in backward as well as forward direction.*/
/* The car is programmed to move backwards B meters and forwards again say F meters, in a straight line. The car does this repeatedly until it is able to park or collides with other objects. The car covers 1 meter in T units of the time*/
/* There is a wall after distance D from car's initial position in the backward direction. The scientists are devising a strategy to prevent this from happening. Your task is to help the scientists by providing them with*/
/*exact information on amount of time available before the car hits the wall by using a suitable user defined function.*/
/* input section:

       Values are given as F B T D respectively where F is forward distance, B is backward distance, T is time and D is the initial distance of car from wall in backward direction.

     output section:

       Amount of time is given as an integer value*/
#include <stdio.h>

int main()
{
    int f, b, t, d;
    int c = 0, tc = 0;
    scanf("%d %d %d %d",&f ,&b , &t , &d);
    if(f < b)
    {
        while(1>0)
        {
            if(c == d)
            {
                break;
            }
            else
            {
                c = c+b;
                tc = tc+(t*b);
                if(c==d)
                {
                    break;
                }
                else if(c>d)
                {
                    tc = tc-(t*(c-d));
                    break;
                }
                c = c-f;
                tc = tc+(t*f);
            }
        }
        printf("%d",tc);
    }
    else
    {
        printf("I will never happen... :-)");
    }
    
    return 0;

}       
