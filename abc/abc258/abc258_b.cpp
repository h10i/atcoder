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
  vector<string> a(n);
  rep(i, n) cin >> a[i];

  vi dx = {1, 0, -1, 0, 1, 1, -1, -1};
  vi dy = {0, 1, 0, -1, 1, -1, 1, -1};
  auto f = [&](int x, int y) -> ll {
    ll total = 0;
    rep(i, 8) {
      int x_next = x, y_next = y;
      ll v = a[x][y] - '0';
      rep(j, n - 1) {
        x_next = ((x_next + dx[i]) % n + n) % n;
        y_next = ((y_next + dy[i]) % n + n) % n;
        v *= 10;
        v += a[x_next][y_next] - '0';
      }
      maxs(total, v);
    }
    return total;
  };

  ll ans = 0;
  rep(i, n) rep(j, n) maxs(ans, f(i, j));
  cout << ans << endl;
  return 0;
}
