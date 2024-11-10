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

int main() {
  int n, m;
  cin >> n >> m;
  vec<string> s(n);
  rep(i, n) cin >> s[i];

  auto check = [&](int x, int y) -> bool {
    rep(i, 3) rep(j, 3) if (s[x + i][y + j] == '.') return false;
    rep(i, 4) if (s[x + 3][y + i] == '#') return false;
    rep(i, 4) if (s[x + i][y + 3] == '#') return false;
    rep(i, 3) rep(j, 3) if (s[x + 6 + i][y + 6 + j] == '.') return false;
    rep(i, 4) if (s[x + 5][y + 8 - i] == '#') return false;
    rep(i, 4) if (s[x + 8 - i][y + 5] == '#') return false;
    return true;
  };

  rep(i, n - 8) rep(j, m - 8) {
    if (check(i, j)) cout << i + 1 << " " << j + 1 << endl;
  }
  return 0;
}
