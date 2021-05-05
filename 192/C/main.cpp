// ゴリ押しで正解
// digitsを配列に入れてソートしたが、文字列に変換してそれにソート直がけした方が早かったらしい
// 開設読んでも9下げforと0上げforをあれしてたりしてよくわからない
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main() {
  int N, K;
  cin >> N >> K;
  int current = N;
  for(int i = 0; i < K; i++){
    int res = 0;
    vector<int> nums;
    int c = current;
    while(c > 0){
      int dig = c % 10;
      c = c / 10;
      nums.push_back(dig);
    }
    sort(nums.begin(), nums.end());
    int g1 = 0;
    int g2 = 0;
    for(int j = 0; j < nums.size(); j++){
      if(j == 0){
        g2 += nums[nums.size()-1-j];
        g1 += nums[j];
        // cout << g1 << "," << g2 << endl;
      }else {
        g2 += nums[nums.size()-1-j] * pow(10, j);
        g1 += nums[j] * pow(10, j);
        // cout << g1 << "," << g2 << endl;
      }
    }
    current = g1 - g2;
  }
  cout << current << endl;
}
