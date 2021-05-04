/* 問題読みながらメモに式を組み立てていったら解けた！
鶴亀算っぽいけどwhile回しながら数値降ろしたりもしてないのでナニコレという感じはする
全然アルゴリズム感はない
と思ったら最速で読みやすいコード書いてるこのひともほぼ同じ解答だったのでよしとする
https://atcoder.jp/contests/abc095/submissions/2389988
*/
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main() {
  int A, B, C, X, Y;
  cin >> A >> B >> C >> X >> Y;
  if ((A + B) <= 2 * C) {
    cout << (A * X) + (B * Y) << endl;
  } else {
    int sets = min(X,Y);
    int total = sets * (2 * C);
    if(X > Y){ 
      // Yがmin
      int diff = X-Y;
      int amount = min(diff * 2 * C, diff * A);
      total += amount;
    }else {
      // Xがmin
      int diff = Y-X;
      int amount = min(diff * 2 * C, diff * B);
      total += amount;
    }
    cout << total << endl;
  }
}
