#include <iostream> 
#include <vector> 
#include <algorithm> 
using namespace std; 
const int MAX = 9; 
const int TEEMO_MAX = 7; 
vector<int> teemo(MAX); bool check[MAX]; int findTeemo(int pos, int count, int sum) { if (count == TEEMO_MAX) { if (sum == 100) { for (int i = 0; i < pos + 1; i++) if (check[i]) cout << teemo[i] << '\n'; return true; } } else { for (int i = pos; i < MAX; i++) { check[i] = true; if (findTeemo(i + 1, count + 1, sum + teemo[i])) return true; check[i] = false; if (findTeemo(i + 1, count, sum)) return true; } } return false; } int main() { for (int i = 0; i < MAX; i++) cin >> teemo[i]; sort(teemo.begin(), teemo.end()); findTeemo(0, 0, 0); return 0; }
