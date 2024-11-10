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
  int h, w;
  cin >> h >> w;
  vec<string> c(h);
  rep(i, h) cin >> c[i];

  int n = min(h, w);
  vi dx = {1, 1, -1, -1};
  vi dy = {1, -1, 1, -1};
  auto f = [&](int s, int t) -> int {
    if (c[s][t] == '.') return 0;
    int x_size = 0;
    rrep(i, n / 2) {
      bool is_x = true;
      rep(j, 4) {
        int x = s + dx[j] * i;
        int y = t + dy[j] * i;
        if (x < 0 || x >= h || y < 0 || y >= w || c[x][y] == '.') {
          is_x = false;
          break;
        }
      }
      if (!is_x) return x_size;
      x_size++;
    }
    return x_size;
  };

  vi ans(n + 1);
  rep(i, h) rep(j, w) ans[f(i, j)]++;
  rrep(i, n) cout << ans[i] << (i < n ? " " : "\n");
  return 0;
}
