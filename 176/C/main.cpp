#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
 
int main() {
  int N;
  cin >> N;
  vector<ll> a(N);
  rep(i, N) {
    cin >> a.at(i);
  }
  ll ans = 0;
  for(int i = 1; i < N; i++){
    // cout << "a.at(i):" << a.at(i) << ", a.at(i-1):" << a.at(i-1) << endl;
    if(a.at(i) < a.at(i-1)) {
      ans += a.at(i-1) - a.at(i);
      a.at(i) = a.at(i-1);
    }
  }
  cout << ans <<endl;
}
