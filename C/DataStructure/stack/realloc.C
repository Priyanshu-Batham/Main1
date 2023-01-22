#include <stdio.h>
#include <conio.h>
#include <cstdlib>
// #include<alloc.h>
using namespace std;
int main()
{
  int *p, n, m, i, f;
  printf("\nEnter no.of integers to be entered:");
  scanf("%d", &n);
  p = (int *)malloc(n * sizeof(int));
  if (p == NULL)
  {
    printf("\nMemory is not available");
    exit(1);
  }

  // printf("%d\n",*p);
  // printf("%d\n",p);
  // printf("%u\n",p);
  // printf("%u",&p);
  // printf("%u",p);
  for (i = 0; i < n; i++)
  {
    printf("\nEnter an integer:");
    scanf("%d", p + i);
  }
  printf("\nEnter the no of integers to entered more:");
  scanf("%d", &m);
  p = (int *)realloc(p, m * sizeof(int));
  for (i = n; i < n + m; i++)
  {
    printf("\nEnter an integer:");
    scanf("%d", (p + i ));
  }
  for (i = 0; i < m + n; i++)
  {
    printf("\n%u\t", p + i);
    printf("%d\t", *(p + i));
  }
  free(p);
  getch();
  return 0;
}