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
  int n;
  cin >> n;
  vvi t(n);
  rep(i, n - 1) {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    t[u].push_back(v);
    t[v].push_back(u);
  }

  auto f = [&n, &t](int s) -> int {
    int count = 0;
    queue<int> que;
    vec<bool> visited(n, false);
    visited[0] = true;
    que.push(s);
    while (!que.empty()) {
      int u = que.front();
      que.pop();
      if (visited[u]) continue;
      visited[u] = true;
      count++;
      for (int v : t[u]) {
        que.push(v);
      }
    }
    return count;
  };

  if (t[0].size() == 1) {
    cout << 1 << endl;
    return 0;
  }
  vi s;
  for (int u : t[0]) {
    s.push_back(f(u));
  }
  int ans = accumulate(rng(s), 0) - *max_element(rng(s)) + 1;
  cout << ans << endl;
  return 0;
}
