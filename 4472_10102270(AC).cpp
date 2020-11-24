#include <bits/stdc++.h>
using namespace std;
int main(){
    int i, j, n, a[30];
    scanf("%d", &n);
    for(i=0; i<n; ++i) scanf("%d", &a[i]);
    sort(a, a+n);
    bool can[15001]={}, temp[15001]={};
    temp[0] = can[0] = true;
    
    for(i=0; i<n; ++i){
        for(j=0; j<=15000; ++j){
            if(can[j] == true){
                int left=abs(a[i]-j), right=abs(a[i]+j);
                if(left >= 0 && left <= 15000) temp[left] = true;
                if(right >= 0 && right <= 15000) temp[right] = true;
                temp[ a[i] ] = true;
            }
        }
        for(j=0; j<=15000; ++j) can[j] = temp[j];
    }
    
    int m, p;
    scanf("%d", &m);
    while(m--){
        scanf("%d", &p);
        printf( p <= 15000 && can[p] ? "Y ":"N " );
    }
    
    return 0;
}
