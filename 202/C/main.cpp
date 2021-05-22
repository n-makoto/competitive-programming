#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
 
int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  rep(i, N) {
    cin >> a.at(i);
  }
  vector<int> b(N);
  rep(i, N) {
    cin >> b.at(i);
  }
  vector<int> c(N);
  rep(i, N) {
    cin >> c.at(i);
  }


  // // [{1の中身}, {2の中身}...]
  vector<unordered_map<string, vector<int>>> mps;
  for(int i = 1; i < N + 1; i++){
    unordered_map<string, vector<int>> mp;
    // Ai = iとなるインデックスの配列
    mp["A"] = {};
    // Bi = iとなるインデックスの配列
    mp["B"] = {};
    // Bcj = iとなるインデックスの配列
    mp["C"] = {};
    mps.push_back(mp);
  }
  rep(i, N){
    // i = 0のとき、 a.at(0) = 1なので、 mps[0]となり、1の場合の["A"]の配列に対して、1をpush_backする
    mps[a.at(i)-1]["A"].push_back(i+1);
    mps[b.at(i)-1]["B"].push_back(i+1);
    mps[b.at(c.at(i)-1)-1]["C"].push_back(i+1);
  }
  // 最大でN*Nになるから10^5*10^5になってintじゃ耐えられないよ
  ll ans = 0;
  rep(i, N){
    ans += mps[i]["A"].size() * mps[i]["C"].size();
  }
  cout << ans << endl;
  
  // rep(i, N){
  //   cout << "---" << i+1 << "の組み合わせ---" << endl;
  //   cout << "Aの履歴" << endl;
  //   for(int j = 0; j < mps[i]["A"].size(); j++){
  //     cout << mps[i]["A"][j] << ",";
  //   }
  //   cout << endl;
  //   cout << "Bの履歴" << endl;
  //   for(int j = 0; j < mps[i]["B"].size(); j++){
  //     cout << mps[i]["B"][j] << ",";
  //   }
  //   cout << endl;
  //   cout << "Cの履歴" << endl;
  //   for(int j = 0; j < mps[i]["C"].size(); j++){
  //     cout << mps[i]["C"][j] << ",";
  //   }
  //   cout << endl;
  // }
}
