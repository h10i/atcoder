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
  int h, w, k;
  cin >> h >> w >> k;
  vec<string> s(h);
  rep(i, h) cin >> s[i];

  unordered_map<char, vvi> row, col;
  for (char c : {'o', 'x'}) {
    row[c] = vvi(h, vi(w + 1));
    col[c] = vvi(h + 1, vi(w));
  }

  rep(i, h) rep(j, w) {
    for (char c : {'o', 'x'}) {
      row[c][i][j + 1] = row[c][i][j];
      col[c][i + 1][j] = col[c][i][j];
    }
    char c = s[i][j];
    if (c == '.') continue;
    row[c][i][j + 1]++;
    col[c][i + 1][j]++;
  }

  int ans = INF;
  rep(i, h + 1) rep(j, w + 1) {
    int p = i + k;
    if (p <= h && j < w && col['x'][p][j] - col['x'][i][j] == 0) {
      mins(ans, k - (col['o'][p][j] - col['o'][i][j]));
    }
    int q = j + k;
    if (i < h && q <= w && row['x'][i][q] - row['x'][i][j] == 0) {
      mins(ans, k - (row['o'][i][q] - row['o'][i][j]));
    }
  }
  if (ans == INF) ans = -1;
  cout << ans << endl;
  return 0;
}
