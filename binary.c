#include<stdio.h>
long binary(int);
void main()
{
    int n,bin;
    printf("enter decimal no");
    scanf("%d",&n);
    bin=binary(n);
    printf("the binary no. is=%d",bin);
}
long binary(int n)
{
    long bin=0;
    int a,i=1;
    while (n!=0)
    {
        a=n%2;
        n=n/2;
        bin+=a*i;
        i*=10;
    }
    return bin;
}