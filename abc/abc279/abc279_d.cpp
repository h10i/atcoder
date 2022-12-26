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
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
const int MOD = 1000000007;

int main() {
  ll a, b;
  cin >> a >> b;

  auto f = [&](ll n) { return (double)a / sqrt(n + 1) + (double)b * n; };
  ll l = 0, r = a / b;
  while (l + 2 < r) {
    ll c1 = (l * 2 + r) / 3;
    ll c2 = (l + r * 2) / 3;
    if (f(c1) > f(c2)) {
      l = c1;
    } else {
      r = c2;
    }
  }

  double ans = min({f(l), f(l + 1), f(r)});
  printf("%.10f\n", ans);
  return 0;
}
