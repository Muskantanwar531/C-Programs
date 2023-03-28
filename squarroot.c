#include<stdio.h>
void squareroot(int);
void main()
{
    int a;
    printf("enter the no.");
    scanf("%d",&a);
    squareroot(a);
    
}
void squareroot(int a)
{
   float n, b;
   b=a/2;
   n=0;
   while (b!=n)
   {
    n=b;
    b=(a/n+n)/2;
   }
   printf("the square root of a no.=%f",b);
}