#include <bits/stdc++.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<74&&n>0)
	printf("%d blue recommend",n);
	else if(n<100&&n>=74)
	printf("%d green possible",n);
	else if(n<148&&n>=100)
	printf("%d yellow careful",n);
	else if(n>=148&&n<=1000)
	printf("%d red stop",n);
	else
	printf("%d data error",n);
}
