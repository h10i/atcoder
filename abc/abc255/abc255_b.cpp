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
using vll = vector<ll>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
const int MOD = 1000000007;

int main() {
  int n, k;
  cin >> n >> k;
  vi a(k);
  rep(i, k) {
    cin >> a[i];
    a[i]--;
  }
  vll x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];

  ll ans = 0;
  rep(i, n) {
    ll tmp = LINF;
    for (int ai : a) {
      ll d = (x[i] - x[ai]) * (x[i] - x[ai]) + (y[i] - y[ai]) * (y[i] - y[ai]);
      mins(tmp, d);
    }
    maxs(ans, tmp);
  }

  printf("%.6lf\n", sqrt((double)ans));
  return 0;
}
