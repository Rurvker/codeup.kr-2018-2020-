#include <stdio.h>

long long int n;



long long int abs(long long int n)
{
return (n<0)?-n:n;
}
int main()
{
  scanf("%lld", &n);
  printf("%lld\n", abs(n));
  return 0;
}
