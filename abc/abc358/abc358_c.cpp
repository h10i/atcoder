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
  int n, m;
  cin >> n >> m;
  vec<string> s(n);
  rep(i, n) cin >> s[i];

  auto s2b = [](string x) -> int {
    int d = 0;
    for (char c : x) {
      d *= 2;
      if (c == 'o') d++;
    }
    return d;
  };

  vi t(n);
  rep(i, n) t[i] = s2b(s[i]);

  auto f = [&]() -> int {
    int ans = INF, expected = pow(2, m) - 1;
    rep(i, 1 << n) {
      int cnt = 0, actual = 0;
      rep(j, n) {
        if (i & (1 << j)) {
          cnt++;
          actual |= t[j];
        }
      }
      if (actual == expected) mins(ans, cnt);
    }
    return ans;
  };

  cout << f() << endl;
  return 0;
}
