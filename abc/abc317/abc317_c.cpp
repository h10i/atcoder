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
  int n, m;
  cin >> n >> m;
  vvi g(n, vi(n));
  rep(i, m) {
    int a, b, c;
    cin >> a >> b >> c;
    a--, b--;
    g[a][b] = c;
    g[b][a] = c;
  }

  vec<bool> visited(n);
  int ans = 0;
  auto dfs = [&](auto dfs, int v, int total) -> void {
    visited[v] = true;
    maxs(ans, total);
    rep(u, n) {
      if (!visited[u] && g[v][u] > 0) dfs(dfs, u, total + g[v][u]);
    }
    visited[v] = false;
  };

  rep(i, n) dfs(dfs, i, 0);
  cout << ans << endl;
  return 0;
}
