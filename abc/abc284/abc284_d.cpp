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

vector<ll> sieve_of_eratosthenes(ll n) {
  vector<bool> is_prime(n + 1);
  srep(i, 2, n + 1) is_prime[i] = true;
  vector<ll> primes;
  for (ll i = 0; i < n + 1; i++) {
    if (is_prime[i]) {
      primes.push_back(i);
      for (ll j = i * i; j <= n; j += i) is_prime[j] = false;
    }
  }
  return primes;
}

int main() {
  int t;
  cin >> t;
  vector<ll> test(t);
  rep(i, t) cin >> test[i];

  vector<ll> primes = sieve_of_eratosthenes(3 * 1e6);
  for (ll n : test) {
    for (ll x : primes) {
      if (n % x != 0) continue;
      ll p, q;
      if ((n / x) % x == 0) {
        p = x;
        q = n / p / p;
      } else {
        q = x;
        p = round(sqrt(n / q));
      }
      printf("%lld %lld\n", p, q);
      break;
    }
  }

  return 0;
}
