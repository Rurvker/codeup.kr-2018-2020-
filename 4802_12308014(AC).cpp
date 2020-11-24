#include <bits/stdc++.h>
int a[1002][1002],k,n,m;
void f(int x,int y,int number,char point)
{
   if(a[x][y]==0)
   a[x][y]=number++;
   if(a[x+1][y]!=0&&a[x][y+1]!=0&&a[x-1][y]!=0&&a[x][y-1])
   {
      return;
   }
   if(point=='d')
   {
      y++;
      if(y>m||a[x][y]!=0)
      {
         y--;
         point='r';
      }
   }
   else if(point=='u')
   {
      y--;
      if(y<1||a[x][y]!=0)
      {
         y++;
         point='l';
      }
   }
   else if(point=='r')
   {
      x++;
      if(x>n||a[x][y]!=0)
      {
         x--;
         point='u';
      }
   }
   else if(point=='l')
   {
      x--;
      if(x<1||a[x][y]!=0)
      {
         x++;
         point='d';
      }
   }
   f(x,y,number,point);
}
int main()
{
   scanf("%d %d %d",&n,&m,&k);
   f(1,1,1,'d');
   for(int i=1;i<=m;i++)
   for(int j=1;j<=n;j++)
   {
      if(a[j][i]==k)
         return!printf("%d %d",j,i);
   }
   puts("0");
}
