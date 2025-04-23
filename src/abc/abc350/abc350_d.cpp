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
  vvi g(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    --a, --b;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  vec<bool> visited(n, false);
  queue<int> que;
  ll ans = 0;
  rep(root, n) {
    if (visited[root]) continue;
    que.push(root);
    ll nodes = 0, edges = 0;
    while (!que.empty()) {
      int v = que.front();
      que.pop();
      if (visited[v]) continue;
      visited[v] = true;
      nodes++;
      edges += g[v].size();
      for (int v_next : g[v]) {
        if (visited[v_next]) continue;
        que.push(v_next);
      }
    }
    ans += nodes * (nodes - 1) / 2 - edges / 2;
  }
  cout << ans << endl;
  return 0;
}
