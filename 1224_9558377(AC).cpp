#include <cstdio>
int main()
{
	int a,b,c,d;
	double i,j;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	i=(double)a/b;
	j=(double)c/d;
	if(i<j)
	printf("<");
	else if(i>j)
	printf(">");
	else
	printf("=");
}
