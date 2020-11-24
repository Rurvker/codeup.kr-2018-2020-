#include <bits/stdc++.h>
int main()
{
	int a[100000],k,b,i,n=-1;
	scanf("%d",&b);
	for(i=0;i<b;i++)
	scanf("%d ",&a[i]);
	scanf("%d",&k);
	for(i=0;i<b;i++)
	if(a[i]==k)n=i+1;
	printf("%d",n);
}
