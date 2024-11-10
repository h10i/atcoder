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
  int h, w;
  cin >> h >> w;
  vec<string> s(h);
  rep(i, h) cin >> s[i];

  if (s[0][0] != 's') {
    cout << "No" << endl;
    return 0;
  }

  unordered_map<char, char> mp_next;
  mp_next['s'] = 'n';
  mp_next['n'] = 'u';
  mp_next['u'] = 'k';
  mp_next['k'] = 'e';
  mp_next['e'] = 's';
  vvec<bool> visited(h, vec<bool>(w));
  vi dx = {1, 0, -1, 0};
  vi dy = {0, -1, 0, 1};
  auto dfs = [&](auto dfs, int x, int y) -> void {
    visited[x][y] = true;
    rep(i, 4) {
      int x_next = x + dx[i];
      int y_next = y + dy[i];
      if (x_next < 0 || x_next >= h || y_next < 0 || y_next >= w) continue;
      if (visited[x_next][y_next]) continue;
      if (s[x_next][y_next] != mp_next[s[x][y]]) continue;
      dfs(dfs, x_next, y_next);
    }
  };

  dfs(dfs, 0, 0);
  string ans = (visited[h - 1][w - 1] ? "Yes" : "No");
  cout << ans << endl;
  return 0;
}
