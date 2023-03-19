/*C program to print number in alphanumeric array in following input 2 4 3 5 a 7 1 b 4 5 6 7 8 9
following output:- b 4 1 5 7 6 a 7 5 8 3*/
#include <stdio.h>
#include <string.h>
void alpha(char *);
void main()
{
  char array[15];
  printf("Enter array");
  gets(array);
  printf("Display array");
  puts(array);
  alpha(array);
}
void alpha(char *p)
{
  char q[15];
  int m, i, j = 0;
  m = (strlen(p)) / 2;
  printf("\nm=%d \n", m);
  for (i = 0; i < 15; i++)
  {

    if (i % 2 * (1.0) == 0)
    {
      m = m - i;
      q[j] = p[m];
    }
    else if (i % 2 * (1.0) != 0)

    {
      m = m + i;
      q[j] = p[m];
    }
    j++;
  }
  q[j] = '\0';
  puts(q);
}
