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
  vector<P> dij;
  srep(di, -n, n) srep(dj, -n, n) {
    if (di * di + dj * dj == m) dij.emplace_back(di, dj);
  };
  queue<P> q;
  vvi ans(n, vi(n, -1));

  auto push = [&](int i, int j, int d) {
    if (i < 0 || j < 0 || i >= n || j >= n) return;
    if (ans[i][j] != -1) return;
    ans[i][j] = d;
    q.emplace(i, j);
  };

  push(0, 0, 0);
  while (!q.empty()) {
    auto [i, j] = q.front();
    q.pop();
    for (auto [di, dj] : dij) {
      int ni = i + di, nj = j + dj;
      push(ni, nj, ans[i][j] + 1);
    }
  }

  rep(i, n) rep(j, n) {
    cout << ans[i][j] << (j == n - 1 ? '\n' : ' ');
  }

  return 0;
}
