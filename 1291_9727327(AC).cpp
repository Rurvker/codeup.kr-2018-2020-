#include <bits/stdc++.h>
int main()
{
	int a,b,c,k;
	scanf("%d %d %d",&a,&b,&c);
	for(int i=1;i<=a||i<=b||i<=c;i++)
	{
	    if(a%i==0 && b%i==0 && c%i==0)
	    k=i;
	}
	printf("%d",k);
}
