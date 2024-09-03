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
  vec<ll> l(n), r(n);
  rep(i, n) cin >> l[i] >> r[i];

  ll l_sum = accumulate(rng(l), 0ll);
  ll r_sum = accumulate(rng(r), 0ll);
  if (l_sum > 0 || r_sum < 0) {
    cout << "No" << endl;
    return 0;
  }

  vec<ll> x = l;
  ll x_sum = accumulate(rng(x), 0ll);
  rep(i, n) {
    ll d = min(r[i] - l[i], -x_sum);
    x_sum += d;
    x[i] += d;
    if (x_sum == 0) break;
  }

  cout << "Yes" << endl;
  rep(i, n) cout << x[i] << (i < n - 1 ? ' ' : '\n');
  return 0;
}
