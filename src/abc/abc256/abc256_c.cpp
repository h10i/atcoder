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
  const int n = 3, m = 30;
  vi h(n), w(n);
  rep(i, n) cin >> h[i];
  rep(i, n) cin >> w[i];

  int ans = 0;
  rrep(a00, m) rrep(a01, m) rrep(a10, m) rrep(a11, m) {
    int a02 = h[0] - (a00 + a01);
    int a12 = h[1] - (a10 + a11);
    int a20 = w[0] - (a00 + a10);
    int a21 = w[1] - (a01 + a11);
    int a22 = w[2] - (a02 + a12);
    if (min({a02, a12, a20, a21, a22}) > 0 && a20 + a21 + a22 == h[2]) ans++;
  }

  cout << ans << endl;
  return 0;
}
