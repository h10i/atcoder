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
  vvi g(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    g[a - 1].push_back(b - 1);
  }

  vec<bool> visited(n, false);
  auto dfs = [&](auto dfs, int v) -> void {
    if (visited[v]) return;
    visited[v] = true;
    for (int v_next : g[v]) dfs(dfs, v_next);
  };

  int ans = 0;
  rep(i, n) {
    rep(i, n) visited[i] = false;
    dfs(dfs, i);
    rep(i, n) if (visited[i]) ans++;
  }
  cout << ans << endl;
  return 0;
}
