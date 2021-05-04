#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int cnt_digits(ll N){
  int digits = 0;
  while(N > 0){
    N /= 10;
    digits++;
  }
  return digits;
}

int main() {
  ll N;
  cin >> N;
  int ans = cnt_digits(N); // 制約から、最大で10^10の11が入りうる
  // ここの `A*A<=N `がこの問題の肝
  // 約数の一覧は、A*A<=Nまでで出揃う
  // たとえば、10000の約数は100*100で終了する
  for(ll A=1LL;A*A<=N;++A){
    if(N%A!=0) continue;
    const ll B=N/A;
    const int cur=max(cnt_digits(A), cnt_digits(B));
    if(ans>cur){
      ans=cur;
    }
  }
  cout << ans << endl;
}

// 元の方
// int main() {
//   int N;
//   cin >> N;
//   int ans = 11; // 10^10の桁数
//   for(int A = 1;A < N+1; A++) {
//     int amari = N % A;
//     if (amari != 0) continue;
//     int B = N / A;
//     if (A > B) break;
//     cout << "A: " << A << ",B: " << B << endl;
//     int deka = max(to_string(A).size(),to_string(B).size());
//     if (deka > ans) {
//       continue;
//     }else {
//       ans = min(deka,ans);
//     }
//   }
//   cout << ans << endl;
// }
