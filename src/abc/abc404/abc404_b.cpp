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
  int n;
  cin >> n;
  vec<string> s(n);
  rep(i, n) cin >> s[i];
  vec<string> t(n);
  rep(i, n) cin >> t[i];

  auto f = [&n](vec<string> x, vec<string> y) {
    int cnt = 0;
    rep(i, n) rep(j, n) if (x[i][j] != y[i][j]) cnt++;
    return cnt;
  };

  auto rotate = [&n](vec<string> x) {
    vec<string> y(n, string(n, '0'));
    rep(i, n) rep(j, n) y[j][n - 1 - i] = x[i][j];
    return y;
  };

  int ans = INF;
  rep(rotate_cnt, 4) {
    if (rotate_cnt > 0) s = rotate(s);
    mins(ans, f(s, t) + rotate_cnt);
  }

  cout << ans << endl;
  return 0;
}
