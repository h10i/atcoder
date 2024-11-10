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
  int n = 9;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  auto is_pawn = [&](int x, int y) {
    return (0 <= x and x < n) and (0 <= y and y < n) and (s[x][y] == '#');
  };

  int ans = 0;
  rep(i1, n) rep(j1, n) {
    if (s[i1][j1] == '.') continue;
    rep(dx, n) rep(dy, n) {
      if (dx == 0 and dy == 0) continue;
      int i2 = i1 + dx, j2 = j1 - dy;
      if (!(i2 > i1 or j2 >= j1)) continue;
      int i3 = i2 - dy, j3 = j2 - dx;
      int i4 = i3 - dx, j4 = j3 + dy;
      if (is_pawn(i2, j2) and is_pawn(i3, j3) and is_pawn(i4, j4)) ans++;
    }
  }

  cout << ans << endl;
  return 0;
}
