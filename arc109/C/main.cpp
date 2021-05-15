#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
 
int main() {
  int a, b, x, y; // a = 現在位置。Aのa階, B = 目標位置。Bのb階, x = 廊下にかかる分数, y = 階段にかかる分数
  cin >> a >> b >> x >> y;
  bool use_down_rouka = a > b;
  int current = a;
  string side = "A";
  int ans = 0;
  // current == b && side == "B"になるまで回す
  while(current != b || side != "B"){
      // 登っていくパターン
      if(current <= b){
          if(side != "B"){
              ans += x;
              side = "B";
          }else {
              ans += y;
              current++;
          }
      }else {
        // 降りるパターン
        
      }
  }
  cout << ans << endl;
}
