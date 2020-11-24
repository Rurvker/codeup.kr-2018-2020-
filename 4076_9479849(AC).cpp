#include <cstdio>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if((float)a/b==c)
	printf("%.2f STOP",(float)a/b);
	else if((float)a/b>c)
	printf("%.2f DOWN",(float)a/b);
	else if((float)a/b<c)
	printf("%.2f UP",(float)a/b);
}
