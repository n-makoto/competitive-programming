#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main() {
  // 1行に1要素
  int N;
  cin >> N;
  // N個からなるベクトル
  vector<int> vec(N);
  rep(i, N) {
    cin >> vec.at(i);
  }
  int ans = 0;
  for(int i = 1; i < N; i++){
    for(int j = i-1; j < N; j++){
      cout << "vec[i]: " << vec[i] << "vec[j]: " << vec[j] << endl;
      ans += pow((vec[i] - vec[j]), 2);
    }
  }
  cout << ans << endl;
}
