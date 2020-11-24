#include <bits/stdc++.h>
int main()
{
	int i=8,j=10,a,k=1;
	scanf("%d",&a);
	while(1)
	{
	    if(i==11)
	    i=1;
	    if(j==13)
	    j=1;
	    if(k==a)
	    break;
	    i++,j++,k++;
	}
	printf("%c%d",(char)('A'+j-1),i-1);
}
