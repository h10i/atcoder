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
  int n;
  cin >> n;
  vi t(n), k(n);
  vvi a(n);
  rep(i, n) {
    cin >> t[i] >> k[i];
    a[i].resize(k[i]);
    rep(j, k[i]) {
      cin >> a[i][j];
      a[i][j]--;
    }
  }

  vec<bool> master(n, false);
  auto dfs = [&](auto dfs, int v) -> void {
    if (master[v]) return;
    master[v] = true;
    for (int v_next : a[v]) dfs(dfs, v_next);
  };
  dfs(dfs, n - 1);

  ll ans = 0;
  rep(i, n) if (master[i]) ans += t[i];
  cout << ans << endl;
  return 0;
}
