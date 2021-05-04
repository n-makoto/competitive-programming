#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main() {
  string ans = "No";
  int N;
  cin >> N;
  for(int i = 1; i < 10; i++){
    for(int j = 1; j < 10; j++){
      if(i*j == N){
        ans = "Yes";
      }
    }
  }
  cout << ans << endl;
}
