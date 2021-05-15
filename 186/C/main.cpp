#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
 
int main() {
  int N;
  cin >> N;
  int ng = 0;
  for(int i = 1; i < N + 1; i++){
    // 数値の各桁の数値を取得する
    string::size_type pos = to_string(i).find("7");
    if(pos != std::string::npos) {
      ng++;
    }else{
      // 8進数の変換
      std::stringstream ss;
      ss << std::oct << i;
      string::size_type pos2 = ss.str().find("7");
      if(pos2 != string::npos) ng++;
    }
  }
  cout << N - ng << endl;
}
