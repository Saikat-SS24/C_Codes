/* Write a program to enter a number and check whether the number is an Automorphic or not

( A number is said to be an Automorphic , if it is present in the last digit(s) of its square */
#include <stdio.h>
int main()
{
    int a, x, y, b, len = 0, i, mod = 10;
    scanf("%d", &a);
    a = y;
    x = a*a;
    while(a!=0){
        a = a/10;
        len++;
    }
    for (i = 1; i<=len; i++){
        mod = mod*10;
    }
    if( y == x%mod){
        printf("Automorphic number");
    }
    else{
        printf("Not Automorphic number");
    }
    return 0;
}
