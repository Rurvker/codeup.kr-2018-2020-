#include <cstdio>
int main()
{
	int a[7],i,n=0,t=0;
	for(i=0;i<7;i++)
	{
	    scanf("%d",&a[i]);
	    if(a[i]%2==0)
	    {
	        if(a[i]>n)
	        n=a[i];
	    }
	    else
	    {
	        if(a[i]>t)
	        t=a[i];
	    }
	}
	printf("%d",t+n);
}
