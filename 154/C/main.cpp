#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll; 

int main() {
  // 1行に1要素
  int N;
  cin >> N;
  // N個からなるベクトル
  vector<ll> A(N);
  rep(i, N) {
    cin >> A.at((ll)i);
  }
  string ans = "YES";
  // hashmapを定義
  unordered_map<ll, bool> mp;
  for(int i = 0; i < N; i++){
    // hashmapの値にboolを用いることで、すでに該当のキーが存在しているか、の条件判定がかんたんになる
    if(mp[A.at(i)]) {
        ans = "NO";
        break;
    } else {
      mp[A.at(i)] = true;
    }
  }
  cout << ans << endl;
}
