#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
 
int main() {
  int N;
  cin >> N;
  vector<int> x(N);
  rep(i, N) {
    cin >> x.at(i);
  }
  int start = 101;
  int end = 0;
  for(int i = 0; i < N; i++){
    if(x.at(i) > end) end = x.at(i);
    if(x.at(i) < start) start = x.at(i);
  }
  ll ans = -1;
  for(int i = start; i < end; i++){
    int p = i;
    ll sum = 0;
    for(int j = 0; j < N; j++){
      // cout << "i(p):" << p << ", x.at(j):" << x.at(j) << endl; 
      sum += pow((x.at(j) - p),2);
    }
    if(ans == -1 || ans > sum) {
      ans = sum;
    }
  }
  if(ans == -1) ans = 0;
  cout << ans <<endl;
}
