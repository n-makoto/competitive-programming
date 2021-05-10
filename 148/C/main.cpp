#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;

// https://sash.netlify.app/post/cpp-euclidean-algorithm/
// 最大公約数
ll gcd(ll a, ll b) { 
  if (b == 0) return a;
  return gcd(b, a % b);
}
// 最小公倍数
ll lcm(ll a, ll b) { 
  return a*b / gcd(a, b);
}

int main() {
  int A, B;
  cin >> A >> B;
  cout << lcm((ll)A, (ll)B) << endl;
}
