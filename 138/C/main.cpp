#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
 
int main() {
  int N;
  cin >> N;

  vector<int> v(N);
  rep(i, N) {
    cin >> v.at(i);
  }

  sort(v.begin(), v.end());
  double ans = (v.at(0) + v.at(1))/2.;
  if(N > 2) {
    for(int i = 2; i < N; i++){
      ans = (v.at(i) + ans) / 2.;
    }
  }
  cout << fixed << setprecision(5) << ans << endl;
}
