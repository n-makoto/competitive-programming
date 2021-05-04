#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main() {
  // 1行に1要素
  int N;
  cin >> N;
  int ans = 0;
  for(int i = 1; i < N + 1; i++) {
    if(to_string(i).length() % 2 != 0) ans++;
  }

  cout << ans << endl;
}
