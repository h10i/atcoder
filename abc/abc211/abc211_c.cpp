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
const int MOD = 1000000007;

int main() {
  string s;
  cin >> s;

  const int n = s.size();
  string t = "chokudai";
  const int m = t.size();
  vvi dp(n + 1, vi(m + 1));
  rep(i, n + 1) dp[i][0] = 1;
  rep(i, n) rep(j, m) {
    if (s[i] == t[j]) {
      dp[i + 1][j + 1] = (dp[i][j + 1] + dp[i][j]) % MOD;
    } else {
      dp[i + 1][j + 1] = dp[i][j + 1];
    }
  }
  cout << dp[n][m] << endl;
  return 0;
}
