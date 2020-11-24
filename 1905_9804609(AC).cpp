#include <bits/stdc++.h>
int n,i=1,k=0;
int f()
{
    if(i==n+1)
    {
        printf("%d",k);
    return 0;
    }
    else
    {
        k+=i;
        i++;
        return f();
    }
}
int main()
{
	scanf("%d",&n);
	f();
}
