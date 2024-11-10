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

  const int n3 = pow(3, n);
  vec<string> ans(n3, string(n3, '.'));
  auto f = [&ans](auto f, int i, int j, int d) -> void {
    if (d == 1) {
      ans[i][j] = '#';
      return;
    }
    d /= 3;
    rep(x, 3) rep(y, 3) {
      if (x == 1 && y == 1) continue;
      f(f, i + d * x, j + d * y, d);
    }
  };

  f(f, 0, 0, n3);
  for (string s : ans) cout << s << endl;
  return 0;
}
