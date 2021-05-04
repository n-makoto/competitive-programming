#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main() {
  int N;
  cin >> N;
  string S, T;
  cin >> S >> T;
  string ans = "";
  for(int i = 0; i < N; i++){
    ans += S.at(i);
    ans += T.at(i);
  }
  cout << ans << endl;
}
