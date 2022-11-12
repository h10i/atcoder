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
using vb = vector<bool>;
using vvb = vector<vb>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
const int MOD = 1000000007;

int main() {
  int n, s;
  cin >> n >> s;
  vi a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  vvb dp(n + 1, vb(s + 1, false));
  dp[0][0] = true;
  rep(i, n) rep(j, s + 1) {
    if (!dp[i][j]) continue;
    if (j + a[i] <= s) dp[i + 1][j + a[i]] = true;
    if (j + b[i] <= s) dp[i + 1][j + b[i]] = true;
  }

  if (!dp[n][s]) {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;
  string t(n, 'H');
  drep(i, n) {
    if (s >= a[i] and dp[i][s - a[i]]) {
      t[i] = 'H';
      s -= a[i];
    } else {
      t[i] = 'T';
      s -= b[i];
    }
  }

  cout << t << endl;
  return 0;
}
