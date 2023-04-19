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
  ll x, a, d, n;
  cin >> x >> a >> d >> n;

  auto f = [](ll a, ll d, ll n) -> ll { return a + (n - 1) * d; };
  if (d < 0) {
    a = f(a, d, n);
    d *= -1;
  }
  auto check = [&](ll i) -> bool { return f(a, d, i) <= x; };
  ll ok = 1, ng = n + 1;
  while (abs(ok - ng) > 1) {
    ll mid = (ok + ng) / 2;
    if (check(mid)) {
      ok = mid;
    } else {
      ng = mid;
    }
  }
  ll ans = abs(x - f(a, d, ok));
  if (ok < n) mins(ans, abs(x - f(a, d, ok + 1)));
  cout << ans << endl;
  return 0;
}
