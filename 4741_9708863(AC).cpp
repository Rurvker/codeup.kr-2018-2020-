#include <bits/stdc++.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	a=a*60+b+c;
	printf("%d %d",(a/60)%24,a%60);
}
