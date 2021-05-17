#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
 
int main() {
  int N, A, B;
  cin >> N >> A >> B;
  // N/2よりN側だったら左に移動する、0側だったら右に移動する
  // 対戦相手のコマがあったら逆に移動する
  // 逆に移動したらNを上回る場合は移動を終わる
  bool finish = false;
  int alice_position = A;
  int borys_position = B;
  bool alice_turn = true;
  string winner = "";
  while(!finish){
    if(alice_turn){
      // 左に移動する
      if(alice_position > N/2){
        // 左にborysがいた場合
        if(alice_position - 1 == borys_position){
          // 右にも移動できない場合はfinish
          if(alice_position == N){
            finish = true;
            winner = "borys";
          }else {
            // 右に移動する
            alice_position++;
          }
        }else {
          // 左に移動する
          alice_position--;
        }
      } else {
        // 右に移動する
      }
    }else {
    }
    alice_turn = !alice_turn;
    finish = true;
    winner = "Alice";
  }
  cout << winner << endl;
}
