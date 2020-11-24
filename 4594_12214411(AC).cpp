#include <bits/stdc++.h>
using namespace std;
int n,maxi=0;
struct LINE{
   int a;
   int b;
   int lis=1;
};
LINE k[101];
bool cmp(LINE q,LINE w)
{
   return q.a<w.a;
}
void findLIS()
{
   for(int i=1;i<=n;i++)
   {
      int realmax=0;
      for(int j=i;j>=1;j--)
      {

         if(k[i].b>k[j].b)
         {
            if(realmax<k[j].lis)
               realmax=k[j].lis;
         }

      }
      k[i].lis+=realmax;
   }
   for(int i=1;i<=n;i++)
   {
      if(k[i].lis>=maxi)
      maxi=k[i].lis;
   }
}
int main()
{
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
      scanf("%d %d",&k[i].a,&k[i].b);
   }
   sort(k+1,k+n+1,cmp);
   findLIS();
   printf("%d",n-maxi);
}
