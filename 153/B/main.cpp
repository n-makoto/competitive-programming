#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main() {
  int H, N;
  cin >> H >> N;
  // N個からなるベクトル
  vector<int> vec(N);
  rep(i, N) {
    cin >> vec.at(i);
  }
  for(auto i: vec) {
    H -= i;
  }
  if(H <= 0){
    cout << "Yes" << endl;
  }else {
    cout << "No" << endl;
  }
}
