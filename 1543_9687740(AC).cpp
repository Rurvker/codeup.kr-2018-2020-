#include <stdio.h>

int n;



int i=-1;
int f(int a)
{
    i++;
    if(a==i)
    return 0;
    printf("love\n");
    return f(a);
}
int main()
{
  scanf("%d", &n);
  f(n);
  return 0;
}
