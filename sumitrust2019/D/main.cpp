// できなかった
// Sを三重ループすると10^10^10となるので間に合わない
// 暗証番号が000から999までの1000通りしかないので暗証番号を全探索してSから作れないか試行する考えはなかった
// 以下のコードがわかりやすい
// 0から9を三重ループすることで、000~999の文字列を全探索できる
// https://sho03.hatenablog.com/entry/2020/05/03/104727
// モデル化するとしたら、組み合わせが複雑な場合は放棄して逆側から全探索できないか考えてみること、とか？
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main() {
  int N;
  string S;
  cin >> N >> S;
  for(int i = 0; i < S.size(); i++){
    for(int j = 1; j < S.size(); j++){
      for(int k = 2; k < S.size(); k++){
        cout << S.at(i) + S.at(j) + S.at(k) << endl;
      }
    }
  }
}
