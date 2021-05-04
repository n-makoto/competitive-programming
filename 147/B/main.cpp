// 文字列の回文判定
// 文字列の反転
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main() {
  string S;
  cin >> S;
  // Sが奇数個の文字の場合、中心を削除しておく
  if(S.size() % 2 != 0){
    S = S.erase(S.size()/2, 1);
  }
  string back_S = S;
  reverse(back_S.begin(), back_S.end());
  int ans = 0;
  for(int i = 0; i < S.size()/2; i++){
    if(S.at(i) != back_S.at(i)) ans++;
  }
  cout << ans << endl;
}
