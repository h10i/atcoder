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
  int n, m;
  cin >> n >> m;
  vvi g(n);
  rep(i, m) {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    g[u].push_back(v);
    g[v].push_back(u);
  }

  if (m != n - 1) {
    cout << "No" << endl;
    return 0;
  }

  rep(i, n) {
    if (g[i].size() > 2) {
      cout << "No" << endl;
      return 0;
    }
  }

  queue<int> que;
  que.push(0);
  unordered_set<int> visited;
  visited.insert(que.front());
  while (!que.empty()) {
    int u = que.front();
    que.pop();
    for (int v : g[u]) {
      if (!visited.count(v)) {
        visited.insert(v);
        que.push(v);
      }
    }
  }
  cout << (visited.size() == n ? "Yes" : "No") << endl;
  return 0;
}
