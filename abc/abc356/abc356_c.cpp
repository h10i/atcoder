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
  int n, m, k;
  cin >> n >> m >> k;
  vi c(m);
  vec<bitset<15>> a(m);
  vec<bool> opened(m);
  rep(i, m) {
    cin >> c[i];
    rep(j, c[i]) {
      int x;
      cin >> x;
      x--;
      a[i].set(x);
    }
    char r;
    cin >> r;
    opened[i] = r == 'o';
  }

  auto check = [&m, &k, &a, &opened](bitset<15> pattern) -> bool {
    rep(i, m) {
      bitset<15> result = (a[i] & pattern);
      bool openable = (int)result.count() >= k;
      if (openable != opened[i]) return false;
    }
    return true;
  };

  int ans = 0;
  rep(i, 1 << n) {
    bitset<15> pattern = bitset<15>(i);
    if (check(pattern)) ans++;
  }
  cout << ans << endl;
  return 0;
}
