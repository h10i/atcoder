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
  ll n, m;
  cin >> n >> m;

  map<ll, ll> hands;
  rep(i, n) {
    ll a;
    cin >> a;
    hands[a]++;
  }

  int type_n = hands.size();

  if (type_n == m) {
    cout << 0 << endl;
    return 0;
  }

  ll total = 0;
  vi cards;
  for (auto& [k, v] : hands) {
    cards.push_back(k);
    total += k * v;
  }

  ll p;
  rep(i, type_n) {
    if (cards[(i + 1) % type_n] != (cards[i] + 1) % m) {
      p = (i + 1) % type_n;
      break;
    }
  }

  ll score = 0, max_score = 0;
  rep(i, type_n) {
    ll j = (p + i) % type_n;
    score += cards[j] * hands[cards[j]];
    maxs(max_score, score);
    if (cards[(j + 1) % type_n] != (cards[j] + 1) % m) score = 0;
  }

  ll ans = total - max_score;
  cout << ans << endl;
  return 0;
}
