#include <cstdio>
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d %d %d",a/3600, (a/60)%60, a%60);
}
