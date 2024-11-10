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
  int h1, w1;
  cin >> h1 >> w1;
  vvi a(h1, vi(w1));
  rep(i, h1) rep(j, w1) cin >> a[i][j];
  int h2, w2;
  cin >> h2 >> w2;
  vvi b(h2, vi(w2));
  rep(i, h2) rep(j, w2) cin >> b[i][j];

  rep(i, (1 << h1)) rep(j, (1 << w1)) {
    vi ch, cw;
    rep(k, h1) if (i & (1 << k)) ch.push_back(k);
    rep(k, w1) if (j & (1 << k)) cw.push_back(k);
    if (ch.size() != h2 || cw.size() != w2) continue;
    vvi c(h2, vi(w2));
    rep(ci, h2) rep(cj, w2) c[ci][cj] = a[ch[ci]][cw[cj]];
    if (c == b) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
