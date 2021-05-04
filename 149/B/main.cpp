// 制約を必ず見てから書き始めること
// 10^9以上を回そうとしている場合は手を止めて考える
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main() {
  long long A, B, K;
  cin >> A >> B >> K;
  if(A >= K){
    cout << A - K << " " << B << endl;
  }else if(A < K && B >= (K-A)){
    cout << 0 << " " << B - (K - A) << endl;
  }else {
    cout << 0 << " " << 0 << endl;
  }
}
