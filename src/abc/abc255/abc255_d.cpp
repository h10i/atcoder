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
  vec<ll> a(n);
  rep(i, n) cin >> a[i];

  sort(rng(a));
  vec<ll> t(n + 1);
  rep(i, n) t[i + 1] = t[i] + a[i];
  auto f = [&a, &n, &t](ll x) -> ll {
    int l = 0, r = n - 1;
    while (l <= r) {
      int m = (l + r) / 2;
      if (a[m] < x) {
        l = m + 1;
      } else {
        r = m - 1;
      }
    }
    return x * l - t[r + 1] + (t[n] - t[l]) - (x * (n - l));
  };
  rep(i, q) {
    ll x;
    cin >> x;
    cout << f(x) << endl;
  }
  return 0;
}
