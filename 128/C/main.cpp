#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
// int 型を vector 型に変換
// bit: 集合を表す整数
// N: 何個のものについて考えているか
vector<int> IntegerToVector(int bit, int N) {
    vector<int> S;
    for (int i = 0; i < N; ++i) {
        if (bit & (1 << i)) {
            S.push_back(i);
        }
    }
    return S;
}

int main() {
  int N, M; // N = スイッチの総数, M = 電球の総数
  cin >> N >> M;
  vector<vector<int>> S;
  // 電球のスイッチ
  rep(i, M){
    int k;
    cin >> k;
    vector<int> ss;
    rep(j, k) {
      int z;
      cin >> z;
      ss.push_back(z-1); // 1始まりが面倒くさいのでindexに変換
    }
    S.push_back(ss);
  }
  vector<int> p(M);
  rep(i, M) {
    cin >> p.at(i);
  }

  long long res = 0;
  // bit 全探索
  for (int bit = 0; bit < (1 << N); ++bit) {
    bool ok = true;
    for(int i = 0; i < M; ++i){
      int con = 0;
      for(auto v: S[i]){
        if(bit & (i<<v)) ++con; // bitで表された組に存在するという意味になる
      }
      if(con % 2 != p[i]) ok = false;
    }
    if(ok) ++res;
  }
  cout << res <<endl;
}
