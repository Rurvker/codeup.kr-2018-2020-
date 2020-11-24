#include <bits/stdc++.h>
int main()
{
	long long int a=0,b=0,c=0,d=0,e=0,f=0,i,tmp,x,y,tmpx,tmpy;
	long long int an=0,bn=0,cn=0,dn=0,en=0,fn=0;
	char p[30],q[30];
	scanf("%s %s",p,q);
	
	int ty = 0;
	for(i=0; i<strlen(p); i++)
	{
		if (p[i] == 'x' || p[i] == 'y') ty++;
		else if (p[i] == '=' || p[i] == '+');
		else if (p[i] == '-')
		{
			if (ty == 0) an=1;
			else if (ty == 1) bn=1;
			else cn=1;
		}
		else
		{
			if (ty == 0)
			{
				a *= 10;
				a += p[i]-'0';
			}
			else if (ty == 1)
			{
				b *= 10;
				b += p[i]-'0';
			}
			else
			{
				c *= 10;
				c += p[i]-'0';
			}
		}
	}
	if (a==0) a=1; if (b==0) b=1; if (c==0) c=1;
	if (an == 1) a*=-1; if (bn == 1) b*=-1; if (cn == 1) c*=-1;
	ty = 0;
	for(i=0; i<strlen(q); i++)
	{
		if (q[i] == 'x' || q[i] == 'y') ty++;
		else if (q[i] == '=' || q[i] == '+');
		else if (q[i] == '-')
		{
			if (ty == 0) dn=1;
			else if (ty == 1) en=1;
			else fn=1;
		}
		else
		{
			if (ty == 0)
			{
				d *= 10;
				d += q[i]-'0';
			}
			else if (ty == 1)
			{
				e *= 10;
				e += q[i]-'0';
			}
			else
			{
				f *= 10;
				f += q[i]-'0';
			}
		}
	}
	if (d==0) d=1; if (e==0) e=1; if (f==0) f=1;
	if (dn == 1) d*=-1; if (en == 1) e*=-1; if (fn == 1) f*=-1;
	b*=d,c*=d;
	tmp=a;
	a*=d;
	d*=tmp,e*=tmp,f*=tmp;
	if(a==d&&b==e)
	{
		if(c==f)
		printf("Indeterminate");
		else
		printf("Impossible");
	}
	else
	{
		y=(c-f)/(b-e);
		x=(c-(b*y))/a;
		printf("x = %lld\ny = %lld",x,y);
	}
}
