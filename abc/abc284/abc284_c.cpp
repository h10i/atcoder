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

vector<bool> visited;
void dfs(vvi &graph, int v) {
  visited[v] = true;
  for (int next_v : graph[v]) {
    if (visited[next_v]) continue;
    dfs(graph, next_v);
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  vvi graph(n, vi(n));
  rep(i, m) {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }

  visited.assign(n, false);
  int ans = 0;
  rep(i, n) {
    if (!visited[i]) {
      ans++;
      dfs(graph, i);
    }
  }
  cout << ans << endl;
  return 0;
}
