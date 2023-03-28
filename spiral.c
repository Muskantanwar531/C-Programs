#include <stdio.h>
#define k 10
void main()
{
    int n;
    int a[k][k]={0};
    int i=0,j=0,m=0,l=n-1,p=0,q=n-1,num=1;
    printf("enter the size n");
    scanf("%d", &n);
    while (num <= n * n)
    {
        for (j= p; j <=q; j++)
        {
            a[m][j] = num++;
        }
        m++;
        for (i = m ; i <= l; i++)
        {
            a[i][q] = num++;
        }
        q--;
        for (j = q; j >= p; j--)
        {
            a[l][j] = num++;
        }
        l--;
            for (i = l; i >= m; i--)
            {
                a[i][p] = num++;
            
            }
            p++;
    }
        printf("\n");
        for ( i = 0; i < n; i++)
        {
            for ( j = 0; j < n; j++)
            {
                printf("%d\t",a[i][j]);
            }
             printf("\n");
        }
        
    }
