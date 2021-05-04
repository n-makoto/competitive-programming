#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
// 約数を全列挙して配列として返す
// MEMO: https://qiita.com/drken/items/a14e9af0ca2d857dad23#3-%E7%B4%84%E6%95%B0%E5%88%97%E6%8C%99
vector<int> enum_divisors(int N) {
    vector<int> res;
    for (int i = 1; i * i <= N; ++i) {
        if (N % i == 0) {
            res.push_back(i);
            // 重複しないならば i の相方である N/i も push
            if (N/i != i) res.push_back(N/i);
        }
    }
    // 小さい順に並び替える
    sort(res.begin(), res.end());
    return res;
}

int main() {
  // 1行に1要素
  int N;
  cin >> N;
  int ans = 0;
  for(int i = 1; i < N + 1; i++) {
    if(i%2 == 0) continue;
    vector<int> res = enum_divisors(i);
    if (res.size() == 8) {
      ans++;
    }
  }
  cout << ans << endl;
}
