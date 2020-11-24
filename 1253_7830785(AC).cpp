#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>=b)
    {
        for(;b<=a;b++)
        {
            printf("%d ",b);
        }
    }
    else
    {
        for(;a<=b;a++)
        {
            printf("%d ",a);
        }
    }
}
