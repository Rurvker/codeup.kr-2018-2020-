#include <cstdio>
int main()
{
	int a[10],t=0;
	for(int i=0;i<10;i++)
	{
	    scanf("%1d",&a[i]);
	    t+=a[i];
	}
	if(t%7==4)
	printf("Bad");
	else
	printf("Good");
}
