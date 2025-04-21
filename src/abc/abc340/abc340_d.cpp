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
  vvec<P> g(n);
  rep(i, n - 1) {
    int a, b, x;
    cin >> a >> b >> x;
    x--;
    g[i].emplace_back(i + 1, a);
    g[i].emplace_back(x, b);
  }

  vec<ll> dist(n, LINF);
  dist[0] = 0;
  priority_queue<pair<ll, int>> pq;
  pq.emplace(0, 0);
  while (!pq.empty()) {
    auto [d, v] = pq.top();
    pq.pop();
    d = -d;
    if (dist[v] < d) continue;
    for (auto [u, w] : g[v]) {
      if (dist[u] > d + w) {
        dist[u] = d + w;
        pq.emplace(-dist[u], u);
      }
    }
  }
  cout << dist[n - 1] << endl;
  return 0;
}
