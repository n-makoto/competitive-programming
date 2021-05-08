#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void recursive_comb(int *indexes, int s, int rest, std::function<void(int *)> f) {
  if (rest == 0) {
    f(indexes);
  } else {
    if (s < 0) return;
    recursive_comb(indexes, s - 1, rest, f);
    indexes[rest - 1] = s;
    recursive_comb(indexes, s - 1, rest - 1, f);
  }
}


// nCkの組み合わせに対して処理を実行する
void foreach_comb(int n, int k, std::function<void(int *)> f) {
  int indexes[k];
  recursive_comb(indexes, n - 1, k, f);
}

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) {
    cin >> A.at(i);
  }
  int ans = 0;
  foreach_comb(N, 2, [&](int *indexes) {
    // std::cout << indexes[0] << ',' << indexes[1] << std::endl; 
    // cout << "i:" << A.at(indexes[0]) << ", j:" << A.at(indexes[1]) << ", diff:" << diff <<  endl;
    if((A.at(indexes[0]) - A.at(indexes[1])) % 200 == 0) {
      ans++;
    }
  });
  cout << ans << endl;
}


// int main() {
//   int N;
//   cin >> N;
//   vector<int> A(N);
//   rep(i, N) {
//     cin >> A.at(i);
//   }
//   int ans = 0;
//   for(int i = 0; i < N - 1; i++){
//     for(int j = i + 1; j < N; j++){
//       int diff = A.at(i) - A.at(j);
//       if(diff % 200 == 0){
//         ans++;
//       }
//     }
//   }
//   cout << ans << endl;
// }

// int main() {
//   int N;
//   cin >> N;
//   vector<int> A(N);
//   rep(i, N) {
//     cin >> A.at(i);
//   }
//   // bit全探索
//   int count = 0;
//   // 1 << Nは組み合わせの総数であるところの2^Nになる。N = 3であれば8。
//   // 全組み合わせを順になめていくので、0から1 << Nの前まで繰り返すことでそれを実現している。
//   for(int bit = 0; bit < (1 << N) ; bit++) {
//     vector<int> S;
//     for(int i = 0; i < N; i++){
//       if(bit & (1 << i)){
//         S.push_back(i);
//       }
//     }
//     if(S.size() != 2) continue;
//     // for(auto s: S){
//     //   cout << s << ",";
//     // }
//     // cout << endl;
//     // ここまでで、Sには今回の組み合わせ（厳密にいえばaの添え字の組み合わせ）が格納されている
//     // cout << "i:" << A.at(S.at(0)) << ", j:" << A.at(S.at(1)) << endl;
//     int diff = abs(A.at(S.at(0)) - A.at(S.at(1)));
//     if(diff % 200 == 0) {
//       // cout << "あたりや, " << diff << endl;
//       count++;
//     }else {
//       // cout << "はずれや, " << diff << endl;
//     }
//   }
//   cout << count << endl;
// }