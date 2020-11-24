#include <bits/stdc++.h>
long double quick(const unsigned long long int fg)
{
    long double n = fg / 2.0;
    long double lstX = 0.0; 
    while(n != lstX)  
    { 
        lstX = n;
        n = (n + fg/n) / 2.0; 
    }
    return n;
}  
int main()
{
	unsigned long long int a,k;
	scanf("%llu",&a);
	for(int i=0;i<a;i++)
	{
	    scanf("%llu",&k);
	    printf("%.8Lf\n",quick(k));
	}
}
