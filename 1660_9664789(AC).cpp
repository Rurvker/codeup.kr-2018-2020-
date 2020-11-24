#include <cstdio>
int main()
{
	char a[100]={NULL,};
	gets(a);
	for(int i=0;i<100;i++)
	{
	    if(a[i]==',')
	    a[i]=' ';
	}
	puts(a);
}
