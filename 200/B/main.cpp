#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main() {
  int N,K;
  cin >> N >> K;
  // N個からなるベクトル
  vector<int> vec(K);
  rep(i, K) {
    if(N%200 == 0) {
      N = N / 200;
    }else {
      string tmp = to_string(N) + "200";
      N = std::stoi(tmp);
    }
  }
  cout << N << endl;
}
