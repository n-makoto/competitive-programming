#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main() {
  int N;
  cin >> N;
  int ans = (N / 100) + 1;
  if(N%100 == 0) ans -= 1;

  // 一般的な出力
  cout << ans <<endl;
}
