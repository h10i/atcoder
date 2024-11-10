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
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
const int MOD = 1000000007;

int main() {
  int n, x, y;
  cin >> n >> x >> y;

  vvi t(n + 1);
  rep(i, n - 1) {
    int u, v;
    cin >> u >> v;
    t[u].push_back(v);
    t[v].push_back(u);
  }

  vi ans;
  auto dfs = [&](auto f, int v, int p = -1) -> bool {
    if (v == x) {
      ans.push_back(v);
      return true;
    }
    for (int u : t[v]) {
      if (u == p) continue;
      if (f(f, u, v)) {
        ans.push_back(v);
        return true;
      }
    }
    return false;
  };

  dfs(dfs, y);
  int ans_size = ans.size();
  rep(i, ans_size) cout << ans[i] << (i < ans_size - 1 ? " " : "\n");
  return 0;
}
