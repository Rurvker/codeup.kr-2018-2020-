#include <cstdio>
#include <cmath>
int main()
{
    char a[101];
	scanf("%s", a);
	if (a[0] == '-') printf("%s", a+1);
	else printf("%s", a);
}
