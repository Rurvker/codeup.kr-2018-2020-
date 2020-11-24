#include <bits/stdc++.h>
using namespace std;
int n, s, cnt = 0;
int v[21];
void dfs(int pos, int sum){
    if (pos == n){
        if(sum == s)
            cnt++;
        return;
    }
    dfs(pos + 1, sum + v[pos]);
    dfs(pos + 1, sum);
    return;
}
int main(){
    cin >> n >> s;
    for (int i = 0; i < n; i++)
        cin >> v[i];
    dfs(0, 0);
    if(s == 0) cnt--;
    cout << cnt << "\n";
}
