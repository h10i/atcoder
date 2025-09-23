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
  int h, w;
  cin >> h >> w;
  vec<string> s(h);
  rep(i, h) cin >> s[i];

  vec<P> d = {P(0, 1), P(-1, 0), P(0, -1), P(1, 0)};
  auto count_black = [&](int x, int y) -> int {
    int c = 0;
    for (auto [dx, dy] : d) {
      int nx = x + dx, ny = y + dy;
      if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
      if (s[nx][ny] == '#') c++;
    }
    return c;
  };

  auto solve = [&]() -> bool {
    rep(i, h) rep(j, w) {
      if (s[i][j] == '.') continue;
      int c = count_black(i, j);
      if (!(c == 2 || c == 4)) return false;
    }
    return true;
  };

  cout << (solve() ? "Yes" : "No") << endl;
  return 0;
}
