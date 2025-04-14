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
    a--, b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  auto f = [&]() -> bool {
    vec<bool> visited(n, false);
    queue<P> q;
    rep(i, n) {
      q.push({i, -1});
      while (!q.empty()) {
        int v = q.front().first;
        int v_prev = q.front().second;
        q.pop();
        if (visited[v]) continue;
        visited[v] = true;
        if (g[v].size() > 2) return false;
        for (int v_next : g[v]) {
          if (v_next == v_prev) continue;
          if (visited[v_next]) return false;
          q.push({v_next, v});
        }
      }
    }
    return true;
  };
  cout << (f() ? "Yes" : "No") << endl;
  return 0;
}
