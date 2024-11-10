#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define srep(i, s, t) for (int i = s; i < t; ++i)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;

  ll ans = 0;
  srep(x, 1, N + 1) {
    ll n = N / x;
    ans += n * (n + 1) * x / 2;
  }

  cout << ans << endl;
  return 0;
}
