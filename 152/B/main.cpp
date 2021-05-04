#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main() {
  int a, b;
  cin >> a >> b;
  string ab = "";
  string ba = "";
  rep(i, b){
    ab += to_string(a);
  }
  rep(i, a){
    ba += to_string(b);
  }
  cout << min(ab, ba) << endl;
}
