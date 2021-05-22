#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
 
int main() {
  int H, W;
  cin >> H >> W;
  // - なら -1, + なら 1とする
  vector<vector<char>> map(H, vector<char>(W));
  rep(i, H) {
    rep(j, W) {
      cin >> map.at(i).at(j);
    }
  }
  int takahashi = 0;
  int aoki = 0;
  bool is_takahashi_turn = true;
  int current_row = 0;
  int current_col = 0;
  // 右または下にいけないとゲーム終了なので
  // 右下に到達したら終わる、つまり map.at(H-1).at(W-1)に到達した時点で終了
  while(!(current_row == H - 1 && current_col == W - 1)){
    // 現在地の右を見て、+だったらいく
    if(current_col != W - 1 && map.at(current_row).at(current_col + 1) == '+'){
      current_col++;
      if(is_takahashi_turn){
        takahashi++;
      }else {
        aoki++;
      }
      is_takahashi_turn = !is_takahashi_turn;
    }else if(current_row != H - 1 && map.at(current_row + 1).at(current_col) == '+'){
      current_row++;
      if(is_takahashi_turn){
        takahashi++;
      }else {
        aoki++;
      }
      is_takahashi_turn = !is_takahashi_turn;
    }else {
      // 右にも下にも+がないならダメージを受けてどちらかに行く
      // 右に行ける場合
      if(current_col != W - 1) {
        current_col++;
        if(is_takahashi_turn){
          takahashi--;
        }else {
          aoki--;
        }
        is_takahashi_turn = !is_takahashi_turn;
      }else {
        // 右に行けなかったら下に行く
        current_row++;
        if(is_takahashi_turn){
          takahashi--;
        }else {
          aoki--;
        }
        is_takahashi_turn = !is_takahashi_turn;
      }
    }
  }
  if(takahashi > aoki){
    cout << "Takahashi" << endl;
  }else if(aoki > takahashi) {
    cout << "Aoki" << endl;
  }else {
    cout << "Draw" <<endl;
  }
}
