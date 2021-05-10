// 計算結果をなるべく整数で持っておきたいので、最大で1000 * 1000 * 1000となり10^9のxをlong long 型であらわしつつ、
// それを割った結果を整数ではなくdouble型として入れ込むために、27のあとにドットを打つことで小数点まで計算させるテク
// テクいね〜
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
 
int main() {
  int L;
  cin >> L;
  ll x = L * L * L;
  double ans = x / 27.;
  cout << fixed << setprecision(12) << ans << endl;
}
