#include <cstdio>
int main()
{
    int a[7],i,j,t;
for(i=0;i<7;i++)scanf("%d",&a[i]);
    for(i=0;i<7;i++)
    {
        for(j=i+1;j<7;j++)
        {
            if(a[i]<a[j])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
    printf("%d\n%d",a[0],a[1]);
}
