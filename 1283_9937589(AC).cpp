#include <bits/stdc++.h>
int main()
{
	int a,k,n,i;
	double x;
	scanf("%d\n%d",&a,&k);
	x=(double)a;
	for(i=0;i<k;i++)
	{
	    scanf("%d",&n);
	    x*=(double)((100+n)/100.0);
	}
	if(a>(int)x)
	printf("%.0f\nbad",(double)x-a);
	else if(a<(int)x)
	printf("%.0f\ngood",(double)x-a);
	else
	printf("0\nsame");
}
