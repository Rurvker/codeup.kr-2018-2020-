#include <cstdio>
int main()
{
	int a,t=1;
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
	    for(int j=0;j<a;j++)
	    {
	        printf("%d ",t);
	        t++;
	    }
	    puts("");
	}
}
