#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main() {
  int A, B, K;
  cin >> A >> B >> K;
  int c = min(A,B);
  vector<int> yakusuu;
  for(int i = c; i > 0; i--){
    if (A%i == 0 && B%i == 0) {
      yakusuu.push_back(i);
    }
  }
  // rep(i, yakusuu.size()) {
  //   cout << yakusuu.at(i) << endl;
  // }
  cout << yakusuu.at(K - 1) << endl;
}
