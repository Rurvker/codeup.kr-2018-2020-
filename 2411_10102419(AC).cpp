#include <bits/stdc++.h>
int main()
{
	int n,m=0,f=0,i,j;
	char a[10000]={NULL,};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%s",a);
	    for(j=0;j<strlen(a);j++)
	    if(a[j]==',')
	    {
	        if(a[j+1]=='F')f++;
	        else if(a[j+1]=='M')m++;
	        break;
	    }
	}
	printf("%d\n%d",m,f);
}
