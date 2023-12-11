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
  ll n, p, q, r;
  cin >> n >> p >> q >> r;
  vec<ll> a(n);
  rep(i, n) cin >> a[i];

  ll y = 0, z = 0, w = 0;
  vec<ll> s(3);
  rep(x, n) {
    while (y < n && s[0] < p) {
      s[0] += a[y];
      s[1] -= a[y];
      y++;
    }
    while (z < n && s[1] < q) {
      s[1] += a[z];
      s[2] -= a[z];
      z++;
    }
    while (w < n && s[2] < r) {
      s[2] += a[w];
      w++;
    }
    if (s[0] == p && s[1] == q && s[2] == r) {
      cout << "Yes" << endl;
      return 0;
    }
    s[0] -= a[x];
  }
  cout << "No" << endl;
  return 0;
}
