#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main() {
  int N;
  string S;
  cin >> N >> S;
  int ans = 0;
  for(int i = 2; i < N; i++){
    // C++のsubstrは開始位置とサイズを渡すことに注意！第２引数が終了位置ではない
    if(S.substr(i-2, 3) == "ABC"){
      ans++;
    }
  }
  cout << ans << endl;
}
