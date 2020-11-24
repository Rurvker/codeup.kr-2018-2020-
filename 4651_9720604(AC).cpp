#include <bits/stdc++.h>
int main()
{
	int a[4][3],k=0,i,j;
	for(i=0;i<3;i++)
	{
	    for(j=0;j<4;j++)
	    {
	        scanf("%d",&a[j][i]);
	        k+=a[j][i];
	    }
	    if(k==0)
	    printf("D");
	    else if(k==1)
	    printf("C");
	    else if(k==2)
	    printf("B");
	    else if(k==3)
	    printf("A");
	    else
	    printf("E");
	    puts("");
	    k=0;
	}
}
