#include <cstdio>
int main()
{
	double a,b;
	scanf("%lf %lf",&a,&b);
	if(a<150)
	    a=a-100;
	else if(a<160)
	    a=((a-150)/2)+50;
	else
	    a=(a-100)*0.9;
	a=((b-a)*100)/a;

	if(a<=10)
        printf("정상");
	else if(a<=20)
        printf("과체중");
	else
        printf("비만");
}

