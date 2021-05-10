#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
 
int main() {
  int N, K;
  cin >> N >> K;
  // N個からなるベクトル
  vector<ll> H(N);
  rep(i, N) {
    cin >> H.at(i);
  }
  sort(H.begin(), H.end(), greater<ll>{});
  ll ans = 0;
  for(ll i = K; i < N; i++){
    ans += H.at(i);
  }
  cout << ans << endl;
}
