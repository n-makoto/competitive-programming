#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

// 配列の前のインデックスを保持しながらソートする
// 連想配列 ソート
struct Data{
       int ex_pos; // 元の位置
       int num; // 実際のデータ
};

int main() {
  int N;
  cin >> N;
  vector<int> heights(N);
  vector<string> names(N);
  rep(i, N) {
    cin >> names.at(i) >> heights.at(i);
  }
  // 配列のインデックス indiecs = {0, 1, 2, 3, 4} を作成する。
  std::vector<size_t> indices(heights.size());
  std::iota(indices.begin(), indices.end(), 0);

  // ソートする。
  std::sort(indices.begin(), indices.end(), [&heights](size_t i1, size_t i2) {
      return heights[i1] < heights[i2];
  });
  cout << names[indices[N-2]] <<endl;
}
