#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
 
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

// nPnの順列に対して処理を実行する
void foreach_permutation(int n, std::function<void(int *)> f) {
  int indexes[n];
  for (int i = 0; i < n; i++) indexes[i] = i;
  do {
    f(indexes);
  } while (std::next_permutation(indexes, indexes + n));
}

// nPkの順列に対して処理を実行する
void foreach_permutation(int n, int k, std::function<void(int *)> f) {
  foreach_comb(n, k, [&](int *c_indexes) {
    foreach_permutation(k, [&](int *p_indexes) {
      int indexes[k];
      for (int i = 0; i < k; i++) {
        indexes[i] = c_indexes[p_indexes[i]];
      }
      f(indexes);
    });
  });
}

int main() {
  int T;
  cin >> T;
  vector<vector<ll>> cases;
  rep(i, T){
    ll f,s;
    cin >> f >> s;
    cases.push_back({f, s});
  }
  vector<ll> ans;
  for(int i = 0; i < T; i++){
    ll l = cases.at(i).at(0);
    ll r = cases.at(i).at(1);
    vector<ll> nums;
    for(int i = l; i < r + 1; i++){
      nums.push_back(i);
    }
    ll inner_ans = 0;
    foreach_permutation(nums.size(), 2, [&](int *indexes) {
      // std::cout << indexes[0] << ',' << indexes[1] << std::endl; 
      std::cout << nums.at(indexes[0]) << ',' << nums.at(indexes[1]) << std::endl;
      if(nums.at(indexes[0]) - nums.at(indexes[1]) >= l && nums.at(indexes[0]) - nums.at(indexes[1]) <= r) inner_ans++;
    });
    cout << i+1 << "回目の実行がおわったよ" << endl;
    ans.push_back(inner_ans);
  }
  for(auto a: ans) {
    cout << a << endl;
  }
  //   for(ll j = l; j < r + 1; j++){ // j = Aとして、計算していく
  //     for(ll k = l; k < r + 1; k++){ // k = Bとする
  //       // C = j - k
  //       if(j - k >= l && j - k <= r) {
  //         // cout << "これじゃ！:" << "A:" << j << ", B:" << k << ", C:" << j - k << endl;
  //         inner_ans++;
  //       }
  //     }
  //   }
  //   ans.push_back(inner_ans);
  // }
  // for(auto a : ans){
  //   cout << a << endl;
  // }
}
