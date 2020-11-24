#include <bits/stdc++.h>
int main()
{
int i,j,x,y,arr[50][50]={0},n;
scanf("%d",&n);
x=n/2+1;
y=1;
for(i=1;i<=n*n;i++)
{
arr[y][x]=i;
if(i%n==0)
{
y++;
}
else
{
x++;
y--;
}
if(y==0)
{
y=n;
}
if(x>n)
{
x=1;
}
}
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
printf("%d ",arr[i][j]);
}
printf("\n");
}
}


