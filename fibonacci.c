#include<stdio.h>
#include<stdlib.h>
int main()
{  
    int n;
    int a = 0 , b= 1, c;
    printf("Enter the mumber of terms ");
    scanf("%d" , &n);

    if(n<3)
    {
      printf("Fibonacci sequence with less than 3 terms does not exist");
    }
else
 {   
    printf("%d ", a);
    printf("%d ", b);

    for(int i = 3 ; i <= n; i++ )
    {
        c= a + b;
        printf("%d ", c);
        a = b;
        b = c;
        

    }
 }
}