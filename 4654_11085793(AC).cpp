#include <bits/stdc++.h>
using namespace std;
stack<int> k;
stack<int> loca;
int main()
{
    int a,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        while(!k.empty()&&k.top()<=a)k.pop(),loca.pop();
        if(!k.empty())printf("%d ",loca.top());
        else printf("0 ");
        k.push(a);
        loca.push(i+1);
    }
}

