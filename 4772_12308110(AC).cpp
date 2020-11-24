#include <bits/stdc++.h>
struct student{
   int weight;
   int hight;
   int score=1;
};
int main()
{
   int n;
   student k[50];
   scanf("%d",&n);
   for(int i=0;i<n;i++)
      scanf("%d %d",&k[i].weight,&k[i].hight);
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<n;j++)
      {
         if(k[i].weight<k[j].weight&&k[i].hight<k[j].hight)
            k[i].score++;
      }
      printf("%d ",k[i].score);
   }
}
