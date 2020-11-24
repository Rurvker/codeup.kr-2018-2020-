#include <stdio.h>
int cnt=0;
int main()
{
    int a[10]={0},i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%5==0)
        {
            printf("%d",a[i]);
            cnt++;
            break;
        }
    }
    if(cnt==0)
        printf("0");
}

