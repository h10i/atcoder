#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define srep(i, s, t) for (int i = s; i < t; ++i)
#define rng(a) a.begin(), a.end()
#define rrng(a) a.rbegin(), a.rend()
#define maxs(x, y) (x = max(x, y))
#define mins(x, y) (x = min(x, y))
using namespace std;
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
  int h, w, x, y;
  cin >> h >> w >> x >> y;
  x--;
  y--;
  vector<string> s(h);
  rep(i, h) cin >> s[i];

  int ans = -3;
  for (int i = x; i >= 0 && s[i][y] == '.'; i--) ans++;
  for (int i = x; i < h && s[i][y] == '.'; i++) ans++;
  for (int i = y; i >= 0 && s[x][i] == '.'; i--) ans++;
  for (int i = y; i < w && s[x][i] == '.'; i++) ans++;

  cout << ans << endl;
  return 0;
}
