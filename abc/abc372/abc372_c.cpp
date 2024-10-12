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
  int n, q;
  cin >> n >> q;
  string s;
  cin >> s;
  vi x(q);
  vec<char> c(q);
  rep(i, q) {
    cin >> x[i] >> c[i];
    x[i]--;
  }

  auto is_abc = [&](int x) -> bool {
    if (x < 0 || x >= n - 2) return false;
    return s.substr(x, 3) == "ABC";
  };

  auto check_abc = [&](int x) -> bool {
    rep(i, 3) if (is_abc(x - i)) return true;
    return false;
  };

  int ans = 0;
  rep(i, n - 2) if (is_abc(i)) ans++;
  rep(i, q) {
    bool before = check_abc(x[i]);
    s[x[i]] = c[i];
    bool after = check_abc(x[i]);
    if (before == true && after == false) ans--;
    if (before == false && after == true) ans++;
    cout << ans << endl;
  }
  return 0;
}
