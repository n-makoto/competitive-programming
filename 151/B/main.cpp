#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main() {
  int N, K, M;
  cin >> N >> K >> M;
  vector<int> A(N);
  rep(i, N-1){
    cin >> A[i];
  }
  int target_total = M * N;
  int current_total = 0;
  rep(i, A.size()){
    current_total += A[i];
  }
  int ans = target_total - current_total;
  if(ans < 0) ans = 0;
  if (ans > K) {
    cout << -1 << endl;
  }else {
    cout << ans << endl;
  }
}
