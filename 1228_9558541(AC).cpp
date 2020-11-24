#include <cstdio>
int main()
{
	double a,b;
	scanf("%lf %lf",&a,&b);
	a=(a-100)*0.9;
	a=((b-a)*100)/a;
	if(a<=10)
	printf("정상");
	else if(a<=20)
	printf("과체중");
	else
	printf("비만");
}
