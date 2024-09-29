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
  int n1, n2, m;
  cin >> n1 >> n2 >> m;
  vvi g(n1 + n2);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  auto max_shortest_path = [&](int s) -> int {
    vi dist(n1 + n2, -1);
    queue<int> que;
    que.push(s);
    dist[s] = 0;
    while (!que.empty()) {
      int v = que.front();
      que.pop();
      for (int v_next : g[v]) {
        if (dist[v_next] == -1) {
          dist[v_next] = dist[v] + 1;
          que.push(v_next);
        }
      }
    }

    return *max_element(rng(dist));
  };

  int ans = max_shortest_path(0) + max_shortest_path(n1 + n2 - 1) + 1;
  cout << ans << endl;
  return 0;
}
