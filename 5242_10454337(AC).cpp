#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int n, k, a[1000001], s, ans;
int main(){
    scanf("%d%d", &n, &k);
    for (int i = 0, b, c; i < n; i++) {
        scanf("%d%d", &b, &c);
        a[c] = b;
    }
    k = k * 2 + 1;
    for (int i = 0; i <= 1000000; i++) {
        if (i >= k) s -= a[i - k];
        s += a[i];
        ans = s > ans ? s : ans;
    }
    printf("%d\n", ans);
}

