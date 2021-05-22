#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
 
int main() {
  string S;
  cin >> S;
  string ans = "Yes";
  for(int i = 0; i < S.size(); i++) {
    if((i+1) % 2 == 0){
      if(S[i] != 'L' && S[i] != 'U' && S[i] != 'D') ans = "No";
    }else {
      if(S[i] != 'R' && S[i] != 'U' && S[i] != 'D') ans = "No"; 
    }
  }
  cout << ans << endl;
}
