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
  int n, m;
  cin >> n >> m;
  vec<ll> l(n);
  rep(i, n) cin >> l[i];

  ll total = 0, l_max = 0;
  for (ll v : l) {
    total += v;
    maxs(l_max, v);
  }

  auto is_ok = [&l, &m](ll limit) -> bool {
    const int SPACE = 1;
    ll rows = 0, length = limit;
    for (ll v : l) {
      length += SPACE + v;
      if (length > limit) {
        rows++;
        length = v;
      }
    }
    return rows <= m;
  };

  ll ng = l_max - 1, ok = total + n - 1;
  while (abs(ok - ng) > 1) {
    ll mid = (ok + ng) / 2;
    if (is_ok(mid)) {
      ok = mid;
    } else {
      ng = mid;
    }
  }

  cout << ok << endl;
  return 0;
}
