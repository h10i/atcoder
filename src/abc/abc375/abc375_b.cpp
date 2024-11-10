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
  int n;
  cin >> n;
  vi x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];

  auto dist = [](double ax, double ay, double bx, double by) -> double {
    double dx = bx - ax;
    double dy = by - ay;
    return sqrt(dx * dx + dy * dy);
  };

  int nx = 0, ny = 0;
  double ans = 0;
  rep(i, n) {
    ans += dist(nx, ny, x[i], y[i]);
    nx = x[i];
    ny = y[i];
  }
  ans += dist(nx, ny, 0, 0);
  printf("%.9f\n", ans);
  return 0;
}
