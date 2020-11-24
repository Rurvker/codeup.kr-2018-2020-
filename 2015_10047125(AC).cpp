#include <bits/stdc++.h>
int main(){int a[10]={0,1,2,3,4,5,6,7,8,9};while(std::next_permutation(a,a+10))if((a[0]-a[7])*10000+(a[1]-a[8])*1000+(a[2]-a[9])*100+a[3]*200+a[5]*20+a[6]==0){printf("%d%d%d%d%d+%d%d%d+%d%d%d=%d%d%d%d%d",a[0],a[1],a[2],a[3],a[4],a[3],a[5],a[6],a[3],a[5],a[6],a[7],a[8],a[9],a[3],a[4]);return 0;}}
