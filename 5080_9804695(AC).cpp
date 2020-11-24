#include <bits/stdc++.h>
int main()
{
	int a=100,b=100,k[15][2]={0},i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	for(j=0;j<2;j++)
	scanf("%d",&k[i][j]);
	if(k[i][0]>k[i][1])
	a-=k[i][0];
	else if(k[i][0]<k[i][1])
	b-=k[i][1];
	}
	printf("%d\n%d",b,a);
}
