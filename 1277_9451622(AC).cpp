﻿#include <cstdio>
int main()
{
	int a[1000]={0},i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("%d %d %d",a[0],a[n/2],a[n-1]);
}
