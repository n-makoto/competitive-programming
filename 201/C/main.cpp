#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
 
int main() {
  string S;
  cin >> S;
  vector<int> hissu; // 必須である数値の配列
  vector<int> ninni; // 任意である数値の配列
  vector<int> akan;
  for(int i = 0; i < S.size(); i++){
    if(S.at(i) == 'o') {
      hissu.push_back(i);
    }else if(S.at(i) == '?') {
      ninni.push_back(i);
    }else if(S.at(i) == 'x') {
      akan.push_back(i);
    }
  }
  // cout << "必須: ";
  // for(auto s: hissu){
  //   cout << s << ",";
  // }
  // cout << endl;
  // cout << "任意: ";
  // for(auto s: ninni){
  //   cout << s << ",";
  // }
  // cout << endl;
  // cout << "アカン: ";
  // for(auto s: akan){
  //   cout << s << ",";
  // }
  // cout << endl;

  // 異常値だった場合は強制終了
  // TODO: これ以外のパターンがないか考える
  // if(akan.size() == 10 || hissu.size() > 4) {
  //   cout << 0 << endl;
  //   exit(0);
  // }

  int ok = 0;
  // 0000から9999まで順番に回しながら、暗証番号としてふさわしいか考える
  for(int i = 0; i < 10000; i++){
    string s = to_string(i);
    if(s.size() < 4) {
      // 4桁になるまで頭に'0'をつける
      while(s.size() < 4) {
        s.insert(0, "0");
      }
    }
    // cout << "今回はこれ:" << s << endl;

    // あかん数字が入ってないか調べる
    bool dame = false;
    for(int a : akan){
      if(dame) break;
      std::string::size_type pos = s.find(to_string(a));
      // 見つかった場合はあかんので次にいく
      if(pos != std::string::npos) {
        dame = true;
      }
    }

    // 必須が全部入ってるか確認する
    for(int h : hissu){
      if(dame) break;
      std::string::size_type pos = s.find(to_string(h));
      // なかった場合はあかんので次にいく
      if(pos == std::string::npos) {
        dame = true;
      }
    }
    if(dame) continue;

    // この時点で 「必須が全部確保されている」 && 「アカンのは弾かれている」 状態の暗証番号になっているので、任意は考慮せずとも自動的にOKとなる
    // cout << "ok: " << s << endl;
    ok++;
  }
  
  cout << ok <<endl;
}
