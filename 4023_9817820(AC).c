int map[29][29],i,j,dx[]={0,1,1,-1},dy[]={1,1,0,1};
main(){for(i=5;i<24;i++)for(j=5;j<24;j++)scanf("%d",&map[i][j]);
for(i=5;i<24;i++)for(j=5;j<24;j++){if(map[i][j]<1)continue;
for(int l=0,k;l<4;l++){if(map[i][j]==map[i-dx[l]][j-dy[l]])continue;
for(k=1;k<6;k++){if(map[i+dx[l]*k][j+dy[l]*k]!=map[i][j])break;}
if(k==5){printf("%d\n%d %d",map[i][j],i-4,j-4);return 0;}}}printf("0");}
