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
const int MOD = 998244353;

int main() {
  int n;
  cin >> n;
  vi a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  vvec<ll> dp(n, vec<ll>(2));
  dp[0][0] = 1;
  dp[0][1] = 1;
  rep(i, n - 1) {
    if (a[i + 1] != a[i]) dp[i + 1][0] += dp[i][0] % MOD;
    if (a[i + 1] != b[i]) dp[i + 1][0] += dp[i][1] % MOD;
    if (b[i + 1] != a[i]) dp[i + 1][1] += dp[i][0] % MOD;
    if (b[i + 1] != b[i]) dp[i + 1][1] += dp[i][1] % MOD;
  }
  ll ans = (dp[n - 1][0] + dp[n - 1][1]) % MOD;
  cout << ans << endl;
  return 0;
}
