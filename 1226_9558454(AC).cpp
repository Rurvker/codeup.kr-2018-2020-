#include <cstdio>
int main()
{
	int a[6],b[6],i,j,c,t=0;
	for(i=0;i<6;i++)
	scanf("%d ",&a[i]);
	scanf("%d",&c);
	for(i=0;i<6;i++)
	scanf("%d ",&b[i]);
	for(i=0;i<6;i++)
	{
	    for(j=0;j<6;j++)
	    {
	        if(a[i]==b[j])
	        t++;
	    }
	}
	if(t==5)
	{
	    for(i=0;i<6;i++)
	    {
	        if(b[i]==c)
	        {
	            printf("2");
	            return 0;
	        }
	    }
	    printf("3");
	}
	else if(t==6)
	printf("1");
	else if(t==4)
	printf("4");
	else if(t==3)
	printf("5");
	else
	printf("0");
}
