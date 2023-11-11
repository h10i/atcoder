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
  int n = 9;
  vvi a(n, vi(n));
  rep(i, n) rep(j, n) cin >> a[i][j];

  auto check = [&]() -> bool {
    rep(i, n) {
      set<int> x, y;
      rep(j, n) {
        x.insert(a[i][j]);
        y.insert(a[j][i]);
      }
      if ((int)x.size() != n) return false;
      if ((int)y.size() != n) return false;
    }

    int m = 3;
    rep(i, m) rep(j, m) {
      set<int> z;
      rep(k, m) rep(l, m) z.insert(a[i * m + k][j * m + l]);
      if ((int)z.size() != n) return false;
    }
    return true;
  };

  cout << (check() ? "Yes" : "No") << endl;
  return 0;
}
