#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define srep(i, s, t) for (int i = s; i < t; ++i)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  int x = N % 1000;
  int ans = x == 0 ? 0 : 1000 - x;

  cout << ans << endl;
  return 0;
}
