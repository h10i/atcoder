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

vector<pair<ll, ll>> prime_factorize(ll x) {
  vector<pair<ll, ll>> res;
  for (ll i = 2; i * i <= x; i++) {
    if (x % i != 0) continue;
    ll cnt = 0;
    while (x % i == 0) {
      x /= i;
      cnt++;
    }
    res.emplace_back(i, cnt);
  }
  if (x != 1) res.emplace_back(x, 1);
  return res;
}

bool is_ok(ll n, ll p, ll p_cnt) {
  ll cnt = 0;
  while (n > 0) {
    n /= p;
    cnt += n;
  }
  return cnt >= p_cnt;
}

int main() {
  ll k;
  cin >> k;

  auto pf = prime_factorize(k);

  ll ok = k, ng = 0;
  while (abs(ok - ng) > 1) {
    ll mid = (ok + ng) / 2;
    bool check = true;
    for (auto [p, p_cnt] : pf) {
      if (!is_ok(mid, p, p_cnt)) check = false;
    }
    if (check) {
      ok = mid;
    } else {
      ng = mid;
    }
  }

  cout << ok << endl;

  return 0;
}
