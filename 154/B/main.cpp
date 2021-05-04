#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main() {
  // 1行に1要素
  string S;
  cin >> S;
  string ans;
  rep(i, S.size()){
    ans += "x";
  }

  // 一般的な出力
  cout << ans <<endl;
}
