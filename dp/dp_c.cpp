#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, t) for (int i = s; i < t; ++i)
#define rng(a) a.begin(), a.end()
#define maxs(x, y) (x = max(x, y))
using vi = vector<int>;
using vvi = vector<vi>;

int main() {
  int n;
  cin >> n;
  vvi a(n, vi(3));
  rep(i, n) rep(j, 3) cin >> a[i][j];

  vvi dp(n, vi(3));
  dp[0] = a[0];

  srep(i, 1, n) rep(j, 3) {
    rep(k, 3) {
      if (j == k) continue;
      maxs(dp[i][k], dp[i - 1][j] + a[i][k]);
    }
  }

  cout << *max_element(rng(dp[n - 1])) << endl;
  return 0;
}
