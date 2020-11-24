#include <stdio.h>

float circle(int a){return a*a*3.14;}
main()
{
    int r;
    scanf("%d", &r);
    printf("%.2f", circle(r));
}
