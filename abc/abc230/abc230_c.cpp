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
  ll n, a, b;
  cin >> n >> a >> b;
  ll p, q, r, s;
  cin >> p >> q >> r >> s;

  ll c1 = max(1 - a, 1 - b), c2 = min(n - a, n - b);
  ll d1 = max(1 - a, b - n), d2 = min(n - a, b - 1);
  auto is_painted = [&](ll v, ll u) -> bool {
    ll k1 = v - a, k2 = u - b;
    if ((k1 == k2) && (c1 <= k1) && (k1 <= c2)) return true;
    if ((k1 == k2 * -1) && (d1 <= k1) && (k1 <= d2)) return true;
    return false;
  };

  for (ll x = p; x <= q; x++) {
    for (ll y = r; y <= s; y++) cout << (is_painted(x, y) ? '#' : '.');
    cout << endl;
  }
  return 0;
}
