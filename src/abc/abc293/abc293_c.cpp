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
  int h, w;
  cin >> h >> w;
  vvi a(h, vi(w));
  rep(i, h) rep(j, w) cin >> a[i][j];

  int ans = 0;
  int s = h + w - 2;
  vi paths;
  rep(i, 1 << s) {
    int cnt = 0;
    rep(j, s) if (i & (1 << j)) cnt++;
    if (cnt == h - 1) paths.push_back(i);
  }
  for (int p : paths) {
    set<int> st;
    int x = 0, y = 0;
    st.insert(a[x][y]);
    rep(j, s) {
      if (p & (1 << j)) {
        x++;
      } else {
        y++;
      }
      st.insert(a[x][y]);
    }
    if (st.size() == w + h - 1) ans++;
  }
  cout << ans << endl;
  return 0;
}
