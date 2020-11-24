#include <bits/stdc++.h>
int main()
{
	int a[1000],n,i,k=1,j=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
	    if(i==0)
	        {
	            if(a[i]==1)
	            j+=k;
	        }
	    else
	    {
	        if(a[i]==1)
	        {
	            if(a[i-1]==a[i])
	            k++;
	            else
	            k=1;
	        j+=k;
	        }
	    }
	}
	printf("%d",j);
}
