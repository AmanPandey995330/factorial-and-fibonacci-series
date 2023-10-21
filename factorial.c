#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int factorial(int a)
{
if (a<= 2){
    return a;

}
else
{
    return a%10 * factorial(a-1);
}
}

void main(){
int a ;
    printf("Enter a number a");
    scanf("%d", &a);

    int factori_al =  factorial(a);
    printf("The Factorial of %d is %d ", a,factori_al);
    
}