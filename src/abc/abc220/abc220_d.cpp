#include <bits/stdc++.h>
using namespace std;

#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n) - 1; i >= 0; --i)
#define srep(i, s, t) for (int i = s; i < t; ++i)
#define rng(a) a.begin(), a.end()
#define rrng(a) a.rbegin(), a.rend()
#define maxs(x, y) (x = max(x, y))
#define mins(x, y) (x = min(x, y))
template <typename T>
using vec = vector<T>;
template <typename T>
using vvec = vec<vec<T>>;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using vi = vec<int>;
using vvi = vvec<int>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
const ll MOD = 998244353;

int main() {
  int n;
  cin >> n;
  vi a(n);
  rep(i, n) cin >> a[i];

  vvec<ll> dp(n + 1, vec<ll>(10));
  dp[1][a[0]] = 1;
  for (ll i = 1; i < n; i++) {
    for (ll j = 0; j < 10; j++) {
      ll x = (j + a[i]) % 10;
      ll y = (j * a[i]) % 10;
      dp[i + 1][x] += dp[i][j];
      dp[i + 1][x] %= MOD;
      dp[i + 1][y] += dp[i][j];
      dp[i + 1][y] %= MOD;
    }
  }
  for (ll k = 0; k < 10; k++) {
    cout << dp[n][k] << endl;
  }
  return 0;
}
