#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main() {
  // 1行に1要素
  int N;
  cin >> N;
  // 1行にスペース区切りで複数
  int A, B;
  cin >> A >> B;
  // N個からなるベクトル
  vector<int> vec(N);
  rep(i, N) {
    cin >> vec.at(i);
  }

  // 一般的な出力
  cout << N <<endl;
  // ベクトルを改行区切りで出力
  for(auto v: vec) {
    cout << v << endl;
  }
  // ベクトルをスペース区切りで出力
  rep(i, vec.size()-1) {
    cout << vec.at(i) << " ";
  }
  cout << vec.back() << endl;
}
