#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
 
int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  rep(i, N) {
    cin >> S.at(i);
  }

  unordered_map<string, bool> mp;
  for(int i = 0; i < N; i++){
    if(mp[S.at(i)]) {
      continue;
    } else {
      mp[S.at(i)] = true;
    }
  }
  cout << mp.size() <<endl;
}
