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
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
const int MOD = 1000000007;

int main() {
  int n, k, d;
  cin >> n >> k >> d;
  vi a(n);
  rep(i, n) cin >> a[i];

  ll dp[n + 1][k + 1][d];
  rep(i, n + 1) rep(j, k + 1) rep(l, d) dp[i][j][l] = -1;
  dp[0][0][0] = 0;

  rep(i, n) rep(j, k + 1) rep(l, d) {
    if (dp[i][j][l] == -1) continue;
    maxs(dp[i + 1][j][l], dp[i][j][l]);
    if (j != k) {
      maxs(dp[i + 1][j + 1][(l + a[i]) % d], dp[i][j][l] + a[i]);
    }
  }

  cout << dp[n][k][0] << endl;
  return 0;
}
