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
  int r, c;
  cin >> r >> c;
  vector<string> b(r);
  rep(i, r) cin >> b[i];

  rep(r1, r) rep(c1, c) {
    if (b[r1][c1] == '.' || b[r1][c1] == '#') continue;
    int d = b[r1][c1] - '0';
    b[r1][c1] = '.';
    rep(r2, r) rep(c2, c) {
      if (b[r2][c2] != '#') continue;
      if (abs(r1 - r2) + abs(c1 - c2) <= d) b[r2][c2] = '.';
    }
  }
  for (string bi : b) cout << bi << endl;
  return 0;
}
