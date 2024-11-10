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
const int MOD = 1000000007;

int main() {
  int x, y, z;
  cin >> x >> y >> z;
  string s;
  cin >> s;

  int n = s.size();
  vvec<ll> dp(n + 1, vec<ll>(2, LINF));
  dp[0][0] = 0;
  rep(i, n) {
    if (s[i] == 'a') {
      dp[i + 1][0] = min(dp[i][0] + x, dp[i][1] + z + x);
      dp[i + 1][1] = min(dp[i][1] + y, dp[i][0] + z + y);
    } else {
      dp[i + 1][0] = min(dp[i][0] + y, dp[i][1] + z + y);
      dp[i + 1][1] = min(dp[i][1] + x, dp[i][0] + z + x);
    }
  }
  ll ans = min(dp[n][0], dp[n][1]);
  cout << ans << endl;
  return 0;
}
