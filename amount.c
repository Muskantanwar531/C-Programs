#include <stdio.h>
float amount(int p, int r, int d);
void main()
{
    int p, r, d;
    float k;
    printf("enter the p, r ,d");
    scanf("%d %d %d", &p, &r, &d);
    k = amount(p, r, d);
    printf("total amount is %f", k);
}
float amount(int p, int r, int d)
{
    float n;
    n = (p * r * d) / 100;
    return n;
}