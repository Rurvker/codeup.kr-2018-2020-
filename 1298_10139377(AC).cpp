#include <bits/stdc++.h>

#define ll long long

ll x, y;
ll extgcd(ll a, ll b, ll s1, ll s2, ll t1, ll t2)
{
    if (b == 0)
    {
        x=s1; y=t1;
        return a;
    }
    ll q = a/b;
    return extgcd(b, a-b*q, s2, s1-s2*q, t2, t1-t2*q);
}

int main()
{
	ll a,b,c;
	scanf("%lld %lld %lld",&a,&b,&c);
	if (a == 0 && b == 0)
	{
		if (c == 0) printf("0 0");
		else printf("Not Exist");
		return 0;
	}
	ll g = extgcd(a,b,1,0,0,1);
	if (c%g) return !printf("Not Exist");
	
	printf("%lld %lld", x*(c/g), y*(c/g));
}
