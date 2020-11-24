#include <cstdio>
int main()
{
	int day, a[5],i,tmp=0;
    scanf("%d",&day);
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==day)
            tmp++;
    }
    printf("%d",tmp);
}
