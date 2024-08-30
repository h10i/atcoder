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
  int n, m;
  cin >> n >> m;
  vi a(m), b(m);
  rep(i, m) {
    cin >> a[i];
    a[i]--;
  }
  rep(i, m) {
    cin >> b[i];
    b[i]--;
  }

  vvi g(n);
  rep(i, m) {
    g[a[i]].push_back(b[i]);
    g[b[i]].push_back(a[i]);
  }

  vi x(n, -1);
  bool is_ok = true;
  auto dfs = [&g, &x, &is_ok](auto dfs, int v, int x_value) -> void {
    x[v] = x_value;
    for (int v_next : g[v]) {
      if (x[v_next] == -1) {
        dfs(dfs, v_next, 1 - x_value);
      } else if (x[v_next] == x[v]) {
        is_ok = false;
      }
    }
  };

  rep(i, n) if (x[i] == -1) dfs(dfs, i, 0);

  cout << (is_ok ? "Yes" : "No") << endl;
  return 0;
}
