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
  int n, q;
  cin >> n >> q;
  vec<char> h(q);
  vi t(q);
  rep(i, q) cin >> h[i] >> t[i];

  auto f = [&n](int x, int y, int x_next) -> int {
    if (x > x_next) swap(x_next, x);
    int c = abs(x_next - x);
    if (x_next > y && y > x) {
      return n - c;
    } else {
      return c;
    }
  };
  int l = 1, r = 2;
  int ans = 0;

  rep(i, q) {
    if (h[i] == 'L') {
      ans += f(l, r, t[i]);
      l = t[i];
    } else {
      ans += f(r, l, t[i]);
      r = t[i];
    }
  }

  cout << ans << endl;
  return 0;
}
