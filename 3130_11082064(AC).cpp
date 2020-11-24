#include <bits/stdc++.h>
using namespace std;

stack<int> s;
int n, t, i;
long long sum;

main()
{
	scanf("%d",&n);
	for(i = 1; i <= n; i++)
	{
		scanf("%d", &t);
		while( !s.empty() && s.top() < t )
			s.pop();

		if( s.empty() || s.top() > t )
			s.push(t);
				
		sum += s.size();
	}

	printf("%lld\n",sum - n);
}
