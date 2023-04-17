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
  int n;
  cin >> n;
  vvi a(n, vi(n));
  rep(i, n) rep(j, n) cin >> a[i][j];
  vvi b(n, vi(n));
  rep(i, n) rep(j, n) cin >> b[i][j];

  auto rotate = [&n](vvi& x) -> void {
    vvi res(n, vi(n));
    rep(i, n) rep(j, n) {
      res[i][j] = x[j][n - i - 1];
    }
    x = res;
  };
  auto check = [&n](vvi x, vvi y) -> bool {
    rep(i, n) rep(j, n) {
      if (x[i][j] == 1 && y[i][j] != 1) return false;
    }
    return true;
  };

  bool ok = false;
  rep(i, 4) {
    if (i > 0) rotate(a);
    ok = check(a, b);
    if (ok) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
