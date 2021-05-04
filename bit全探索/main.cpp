// https://drken1215.hatenablog.com/entry/2019/12/14/171657
// の例題1を自分なりに噛み砕いたもの
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
 int main() {
  int N, W; // N個の整数, 総和はW
  cin >> N >> W;
  vector<int> a(N);
  for(int i = 0; i < N; i++){
    cin >> a[i];
  }

  // bit全探索
  bool exist = false;
  for(int bit = 0; bit < (1 << N) ; bit++) {
    // 組み合わせを作りながらその場で判定もしてしまうタイプ
    int sum = 0;
    for(int i = 0; i < N; i++){
      // `bit & (1 << i)`というのは組み合わせに選ばれたもの、と読み替えてもよさそう
      if(bit & (1 << i)) sum += a[i];
    }

    // 判定
    if(sum == W) exist = true;
  }

  if (exist) cout << "Yes" << endl;
  else cout << "No" << endl;
}

// 始めのやつ
// int main() {
//   int N, W; // N個の整数, 総和はW
//   cin >> N >> W;
//   vector<int> a(N);
//   for(int i = 0; i < N; i++){
//     cin >> a[i];
//   }

//   // bit全探索
//   bool exist = false;
//   // 1 << Nは組み合わせの総数であるところの2^Nになる。N = 3であれば8。
//   // 全組み合わせを順になめていくので、0から1 << Nの前まで繰り返すことでそれを実現している。
//   for(int bit = 0; bit < (1 << N) ; bit++) {
//     vector<int> S;
//     for(int i = 0; i < N; i++){
//       if(bit & (1 << i)){
//         S.push_back(i);
//       }
//     }
//     // ここまでで、Sには今回の組み合わせ（厳密にいえばaの添え字の組み合わせ）が格納されているので
//     // あとは愚直に足し合わせればOK
//     int sum = 0;
//     for(int i : S) sum += a[i];
//     // 判定
//     if(sum == W) exist = true;
//   }

//   if (exist) cout << "Yes" << endl;
//   else cout << "No" << endl;
// }
