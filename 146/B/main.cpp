// アルファベット順ズラす
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
 
int main() {
  int N;
  string S;
  cin >> N >> S;
  string answer = "";
  for(char c : S){
    char cb = c + N;
    if(cb > 'Z'){
      cb -= 26;
    }
    answer += cb;
  }
  cout << answer << endl;
}
