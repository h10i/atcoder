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

  queue<int> que;
  vi dp(n, -1);
  vi cnt(n, 0);
  que.push(0);
  dp[0] = 0;
  cnt[0] = 1;
  while (!que.empty()) {
    int v = que.front();
    que.pop();
    for (int v_next : g[v]) {
      if (dp[v_next] == -1) {
        que.push(v_next);
        dp[v_next] = dp[v] + 1;
        cnt[v_next] = cnt[v];
      } else if (dp[v_next] == dp[v] + 1) {
        cnt[v_next] += cnt[v];
      }
      cnt[v_next] %= MOD;
    }
  }

  cout << cnt[n - 1] << endl;
  return 0;
}
