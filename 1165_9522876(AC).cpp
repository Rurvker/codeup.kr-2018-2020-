#include <cstdio>
int main()
{
	int a,x;
	scanf("%d %d",&a,&x);
	if(a%5==0)
	printf("%d",x+(90-a)/5);
	else
	printf("%d",x+1+(90-a)/5);
}
