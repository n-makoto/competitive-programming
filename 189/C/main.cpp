// かなり惜しいところまでいった。
// 二重ループによって配列の始端を固定しながら探索するイメージを脳内に浮かべられたのは○
// 一方、終端をr、始端をlとおいているのだから、r-lをすることによって、間の個数が自明であることに気づけなかったのはもったいなかった
// 計算量上、三重ループ目に耐えきれるものではなかった
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  for(int i = 0; i < N; i++){
    cin >> a[i];
  }

  int ans = 0;
  for(int l = 0; l < N; l++){
    int x = a[l];;
    for(int r = l; r < N; r++){
      // ifではなく、STLのmin関数を使って簡潔に書いているところもポイント
      x = min(x,a[r]);
      // r - lによって、いくつ分の要素が間に存在するかを計算することが出来る。
      // そのため、値を個数分かけ合わせる処理が不要になり、計算量が削減できる。
      ans = max(ans, x*(r-l+1));
    }
  }
  cout << ans << endl;
}

// 以下WA
// bit全探索で解こうとしたが、すべての組み合わせを出してしまうので今回のa[l:r]の組み合わせにはそぐわなかった
// int main() {
//   int N;
//   cin >> N;
//   vector<int> a(N);
//   for(int i = 0; i < N; i++){
//     cin >> a[i];
//   }
//   // bit全探索
//   int sum = 0;
//   for(int bit = 0; bit < (1 << N) ; bit++) {
//     vector<int> S;
//     for(int i = 0; i < N; i++){
//       if(bit & (1 << i)){
//         S.push_back(i);
//       }
//     }
//     int min = 100001;
//     int count = 0;
//     cout << "bit: " << bit << endl;
//     for(auto s: S){
//       if(min > a[s]) min = a[s];
//       cout << a[s] << ",";
//       count++;
//     }
//     cout << endl;
//     cout << "min: " << min << ", count: " << count << endl;
//     int res = min * count;
//     if(res > sum) {
//       cout << "sum updated!: " << res << endl;
//       sum = res;
//     }
//   }
//   cout << sum << endl;
// }
