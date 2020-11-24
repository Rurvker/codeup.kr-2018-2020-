#include <bits/stdc++.h>
using namespace std;
int main() {
    ////freopen("input.txt","r", stdin);
    string str;
    cin >> str;
    stack<int> st;
    int ans = 0;
    for(int i = 0; i < str.size(); i++) {
        char cur = str[i];
        if(cur == '(')
            st.push(cur);
        else {
            if(str[i-1] == '('){
                st.pop();
                ans += st.size();
            }
            else {
                st.pop();
                ans++;
            }
        }
    }
    cout << ans << endl;
}
