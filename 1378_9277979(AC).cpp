#include <cstdio>
int main()
{
	int a,i,j,f=0;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	    for(j=1;j<=i;j++)
	        f+=j;
	printf("%d",f);
}
