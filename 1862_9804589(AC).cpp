#include <stdio.h>
int memo[201]={0,1,1,2};
int fibo(int n)
{
	if(memo[n]!=0)
	return memo[n];
	else
	return memo[n]=(fibo(n-1)+fibo(n-2))%1000000007;
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d",fibo(n));
}
