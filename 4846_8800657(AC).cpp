#include <cstdio>
int main()
{
	int a[100] = { 0 }, b[100] = { 0 }, c, i, h=0;
	scanf("%d", &c);
	for (i = 0; i < c; i++)
	{
		scanf("%d %d", &a[i], &b[i]);
	}
	for (i = 0; i < c; i++)
		h += b[i] % a[i];
	printf("%d", h);
}
