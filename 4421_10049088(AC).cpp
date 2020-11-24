#include <bits/stdc++.h>
int a[26][26],d[26][26],dx[]={0,0,1,-1},dy[]={1,-1,0,0},ans[25*25];
void dfs(int x,int y,int cnt)
{
    d[x][y]=cnt;
    for(int k=0;k<4;k++){
    int nx=x+dx[k];
    int ny=y+dy[k];
    if(nx>=0&& nx<25 &&ny>=0&&ny<25)
    if(a[nx][ny]==1&&d[nx][ny]==0)
    dfs(nx,ny,cnt);}
}
int main()
{
	int n,i,j,cnt=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    for(j=0;j<n;j++){
	        scanf("%1d",&a[j][i]);}}
	for(i=0;i<n;i++){
	    for(j=0;j<n;j++){
	        if(a[i][j]==1&&d[i][j]==0)
	            dfs(i,j,++cnt);}}
	printf("%d\n",cnt);
	for(i=0;i<n;i++){
	    for(j=0;j<n;j++){
	        ans[d[i][j]]++;}}
	std::sort(ans+1,ans+cnt+1);
	for(i=1;i<=cnt;i++)
	    printf("%d\n",ans[i]);
}
