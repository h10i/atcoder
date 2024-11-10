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

vec<bool> sieve_of_eratosthenes(int n) {
  vec<bool> is_prime(n + 1);
  srep(i, 2, n + 1) is_prime[i] = true;
  rep(i, n + 1) {
    if (!is_prime[i]) continue;
    for (int j = i * i; j <= n; j += i) is_prime[j] = false;
  }
  return is_prime;
}

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  vec<bool> is_prime = sieve_of_eratosthenes(b + d);
  vec<bool> t_res(b + 1);
  srep(i, a, b + 1) {
    bool t_win = true;
    srep(j, c, d + 1) if (is_prime[i + j]) t_win = false;
    t_res[i] = t_win;
  }

  srep(i, a, b + 1) {
    if (t_res[i]) {
      cout << "Takahashi" << endl;
      return 0;
    };
  }
  cout << "Aoki" << endl;
  return 0;
}
