#include <bits/stdc++.h>
using namespace std;

#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
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

  vvi dp(n + 1, vi(10));
  rrep(i, 9) dp[1][i] = 1;
  srep(d, 2, n + 1) rrep(i, 9) {
    for (int j : {-1, 0, 1}) {
      int x = i + j;
      if (x < 0 || x > 9) continue;
      dp[d][i] += dp[d - 1][x];
      dp[d][i] %= MOD;
    }
  }
  int ans = 0;
  rrep(i, 9) {
    ans += dp[n][i];
    ans %= MOD;
  }
  cout << ans << endl;
  return 0;
}
