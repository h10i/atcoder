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
  int n, d;
  cin >> n >> d;
  vi x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];

  vvec<bool> connected(n, vec<bool>(n));
  rep(i, n) rep(j, n) {
    if (i == j) continue;
    int xi = x[i] - x[j];
    int yi = y[i] - y[j];
    connected[i][j] = xi * xi + yi * yi <= d * d;
  }

  vec<bool> infected(n, false);
  auto dfs = [&](auto dfs, int v) -> void {
    infected[v] = true;
    rep(v_next, n) {
      if (infected[v_next]) continue;
      if (connected[v][v_next]) dfs(dfs, v_next);
    }
  };
  dfs(dfs, 0);

  rep(i, n) cout << (infected[i] ? "Yes" : "No") << endl;
  return 0;
}
