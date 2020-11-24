#include <cstdio>
int main()
{
	int a;
	scanf("%d",&a);
	if(a<=500)printf("%d",(int)(a*0.7));
	else if(a<=1500)printf("%d",(int)(350+(a-500)*0.4));
	else if(a<=4500)printf("%d",(int)(750+(a-1500)*0.15));
	else if(a<=10000)printf("%d",(int)(1200+(a-4500)*0.05));
	else printf("%d",(int)(1475+(a-10000)*0.02));
}
