#include <stdio.h>
int main()
{
	char a[501] = { 0 };
	int i, j = 0;
	scanf("%s", a);
	for (i = 0; i < 501; i++)
	{

		if (a[i] != EOF)
		{
			j += a[i] - '0';
		}
		else
			break;
	}
	if (j % 3 == 0)
		printf("1");
	else
		printf("0");
}
