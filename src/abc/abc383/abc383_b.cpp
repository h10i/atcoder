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
  int h, w, d;
  cin >> h >> w >> d;
  vec<string> s(h);
  rep(i, h) cin >> s[i];

  auto f = [&](int x1, int y1, int x2, int y2) -> int {
    int res = 0;
    rep(i, h) rep(j, w) {
      if (s[i][j] == '#') continue;
      int d1 = abs(x1 - i) + abs(y1 - j);
      int d2 = abs(x2 - i) + abs(y2 - j);
      if (d1 <= d || d2 <= d) res++;
    }
    return res;
  };

  int ans = 0;
  rep(x1, h) rep(y1, w) {
    if (s[x1][y1] == '#') continue;
    rep(x2, h) rep(y2, w) {
      if (s[x2][y2] == '#') continue;
      maxs(ans, f(x1, y1, x2, y2));
    }
  }
  cout << ans << endl;
  return 0;
}
