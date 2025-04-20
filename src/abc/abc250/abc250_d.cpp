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
  ll n;
  cin >> n;

  auto get_primes = [](ll x_max) -> vec<ll> {
    if (x_max < 2) return {};
    vector<bool> is_prime(x_max + 1, true);
    is_prime[0] = is_prime[1] = false;
    vec<ll> primes;
    for (ll x = 2; x <= x_max; x++) {
      if (!is_prime[x]) continue;
      primes.push_back(x);
      for (ll y = x * x; y <= x_max; y += x) is_prime[y] = false;
    }
    return primes;
  };

  ll q_max = cbrt(n);
  vec<ll> primes = get_primes(q_max);
  vec<ll> p_cnt(q_max + 1, 0);
  int primes_size = primes.size();
  if (primes_size == 0) {
    cout << 0 << endl;
    return 0;
  }
  int c = 0;
  rep(i, primes_size - 1) {
    c++;
    srep(j, primes[i], primes[i + 1]) p_cnt[j] = c;
  }
  c++;
  srep(j, primes[primes_size - 1], q_max + 1) p_cnt[j] = c;
  ll ans = 0;
  for (ll q : primes) {
    ll p_max = min(q - 1, n / q / q / q);
    ans += p_cnt[p_max];
  }
  cout << ans << endl;
  return 0;
}
