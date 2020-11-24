#include <cstdio>
int main()
{
    int a[1000]={0},b,i,j,t;
    scanf("%d",&b);
for(i=0;i<b;i++)scanf("%d",&a[i]);
    for(i=0;i<b;i++)
    {
        for(j=i+1;j<b;j++)
        {
            if(a[i]<a[j])
            {
                t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
    }
    printf("%d",a[0]-a[b-1]);
}
