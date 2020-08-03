#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {
  int N;
  ll D;
  cin >> N >> D;
  int ans = 0;
  rep(i, N) {
    ll X, Y;
    cin >> X >> Y;
    ll dist = X * X + Y * Y;
    if (dist <= D * D) ans++;
  }

  cout << ans << endl;

  return 0;
}
