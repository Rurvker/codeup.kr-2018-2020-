#include <bits/stdc++.h>
using namespace std;
int x,y,n,a[100][2],dx,dy,sum;
void find_min(int k,int p)
{
    if(dx==1)
    {
        if(k==1)
        sum+=abs(dy-p);
        else if(k==2)
        {
            if(y+dy+p>y+(x-dy)+(x-p))
                sum+=y+(x-dy)+(x-p);
            else
                sum+=y+dy+p;
        }
        else if(k==3)
            sum+=p+dy;
        else
            sum+=x-dy+p;
    }
    else if(dx==2)
    {
        if(k==1){
            if(y+dy+p>y+(x-dy)+(x-p))
                sum+=y+(x-dy)+(x-p);
            else
                sum+=y+dy+p;
        }

        else if(k==2)
            sum+=abs(dy-p);
        else if(k==3)
            sum+=dy+y-p;
        else
            sum+=x-dy+y-p;
    }
    else if(dx==3)
    {
        if(k==1)
        {
            sum+=p+dy;
        }
        else if(k==2)
        {
            sum+=y-dy+p;
        }
        else if(k==3)
        {
            sum+=abs(p-dy);
        }
        else
        {
            if(p+dy+x>(y-dy)+x+(y-p))
                sum+=(y-dy)+x+(y-p);
            else
                sum+=p+dy+x;
        }
    }
    else
    {
        if(k==1)
        {
            sum+=dy+x-p;
        }
        else if(k==2)
        {
            sum+=y-dy+x-p;
        }
        else if(k==3)
        {
            if(p+dy+x>(y-dy)+x+(y-p))
                sum+=(y-dy)+x+(y-p);
            else
                sum+=p+dy+x;
        }
        else
        {
            sum+=abs(p-dy);
        }
    }
}
int main()
{
	scanf("%d %d %d",&x,&y,&n);
	for(int i=0;i<n;i++)
        scanf("%d %d",&a[i][0],&a[i][1]);
    scanf("%d %d",&dx,&dy);
    for(int i=0;i<n;i++)
        find_min(a[i][0],a[i][1]);
    printf("%d",sum);
}

