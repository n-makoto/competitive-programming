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
  unordered_map<int, int> mp;
  for(int i = 0; i < N; i++){
    mp[a.at(i)] = i;
  }
  sort(a.begin(), a.end());
  for(int i = 0; i < N; i++) {
    auto itr = mp.find(a.at(i));
    if(itr!= mp.end()){
      cout << (itr->second)+1;
      if(i != N-1) {
        cout << " ";
      }else {
        cout << endl;
      }
    }
  }
}

