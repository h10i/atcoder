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
using vb = vector<bool>;
using vvb = vector<vb>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
const int MOD = 1000000007;

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> g(h);
  rep(i, h) cin >> g[i];

  vvb visited(h, vb(w, false));
  int i = 0, j = 0;
  while (true) {
    if (visited[i][j]) {
      cout << -1 << endl;
      return 0;
    }
    visited[i][j] = true;
    char ope = g[i][j];
    if (ope == 'U') {
      if (i == 0) break;
      i--;
    } else if (ope == 'D') {
      if (i == h - 1) break;
      i++;
    } else if (ope == 'L') {
      if (j == 0) break;
      j--;
    } else if (ope == 'R') {
      if (j == w - 1) break;
      j++;
    }
  }
  cout << i + 1 << " " << j + 1 << endl;
  return 0;
}
