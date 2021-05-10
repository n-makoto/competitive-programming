#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main() {
  int N;
  string S;
  cin >> N >> S;
  int ans = 0;
  for(int i = 0; i < N; i++){
    if(i == 0) {
      ans++;
      continue;
    }
    if(S.at(i) == S.at(i-1)) continue;
    ans++;
  }
  cout << ans << endl;
}
