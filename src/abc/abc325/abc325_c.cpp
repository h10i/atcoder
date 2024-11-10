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
  vec<string> s(h);
  rep(i, h) cin >> s[i];

  vvec<bool> visited(h, vec<bool>(w, false));
  const int n = 8;
  vi dx = {0, 1, 1, 1, 0, -1, -1, -1};
  vi dy = {1, 1, 0, -1, -1, -1, 0, 1};
  auto dfs = [&](auto dfs, int x, int y) -> void {
    if (x < 0 || x >= h || y < 0 || y >= w) return;
    if (visited[x][y] || s[x][y] == '.') return;
    visited[x][y] = true;
    rep(i, n) dfs(dfs, x + dx[i], y + dy[i]);
  };

  int ans = 0;
  rep(i, h) rep(j, w) {
    if (visited[i][j] || s[i][j] == '.') continue;
    dfs(dfs, i, j);
    ans++;
  }
  cout << ans << endl;
  return 0;
}
