#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, t) for (int i = s; i < t; ++i)
using namespace std;
using ll = long long;

int main() {
  int K;
  cin >> K;
  int x = 7 % K;
  srep(i, 1, K + 1) {
    if (x == 0) {
      cout << i << endl;
      return 0;
    }
    x = (x * 10 + 7) % K;
  }
  cout << -1 << endl;
  return 0;
}
