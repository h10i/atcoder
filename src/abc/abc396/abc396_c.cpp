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
  vec<ll> b(n);
  rep(i, n) cin >> b[i];
  vec<ll> w(m);
  rep(i, m) cin >> w[i];

  sort(rng(b), greater<>());
  sort(rng(w), greater<>());
  vec<ll> w_max_sum(m + 1);
  rep(i, m) {
    w_max_sum[i + 1] = w_max_sum[i] + max(0ll, w[i]);
  }

  ll ans = 0, b_sum = 0;
  rep(i, n) {
    b_sum += b[i];
    maxs(ans, b_sum + w_max_sum[min(i + 1, m)]);
  }
  cout << ans << endl;
  return 0;
}
