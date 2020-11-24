#include <bits/stdc++.h>
int main()
{
    long long int a[1000] = { 0 }, k = 0, i, n, t = 0;
	char b[1000] = { NULL, };
	gets(b);
	n = strlen(b) - 1;
	for (i = n; i >= 0; i--)
	{
		t = ((t * 10) + (b[i] - '0'));
		a[i] = (long long int)b[i] - '0';
	}
	printf("%lld",t);
}
