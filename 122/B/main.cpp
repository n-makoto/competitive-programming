#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
 
int main() {
  string S;
  cin >> S;
  int res = 0;
  for(int i = 0; i < S.size(); i++) {
    int j;
    for(j = i; j < S.size(); j++){
      // これだとiとjが同じのを許容してるんだけどなんで良いんだっけ
      // cout << "S[i]: " << S.at(i) << ", S[j]: " << S.at(j) << endl;
      if(S.at(j) != 'A' && S.at(j) != 'C' && S.at(j) != 'G' && S.at(j) != 'T') {
        break;
      }
    }
    chmax(res, j-i); // j = 連続が途切れた位置, i = 開始位置
  }
  cout << res << endl;
}
