#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

int main() {
  vector<int> vec(3);
  rep(i, 3) {
    cin >> vec.at(i);
  }
  sort(vec.begin(), vec.end());
  string ans = "No";
  if(vec[2] - vec[1] == vec[1] - vec[0]) ans = "Yes";
  cout << ans <<endl;
}
