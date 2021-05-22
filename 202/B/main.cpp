#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
 
int main() {
  string S;
  cin >> S;
  string ans = "";
  reverse(S.begin(), S.end());
  for(int i = 0; i < S.size(); i++){
    if(S.at(i) == '0'){
      ans.append("0");
    }else if(S.at(i) == '1'){
      ans.append("1");
    }else if(S.at(i) == '6'){
      ans.append("9");
    }else if(S.at(i) == '8'){
      ans.append("8");
    }else if(S.at(i) == '9'){
      ans.append("6");
    }
  }
  cout << ans << endl;
}
