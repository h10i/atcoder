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
  auto in = [&](vvec<bool>& g) {
    rep(i, m) {
      int a, b;
      cin >> a >> b;
      a--;
      b--;
      g[a][b] = true;
      g[b][a] = true;
    }
  };
  vvec<bool> x(n, vec<bool>(n));
  in(x);
  vvec<bool> y(n, vec<bool>(n));
  in(y);

  vi p(n);
  rep(i, n) p[i] = i;
  do {
    bool ok = true;
    rep(i, n) rep(j, n) {
      if (x[i][j] != y[p[i]][p[j]]) ok = false;
    }
    if (ok) {
      cout << "Yes" << endl;
      return 0;
    }
  } while (next_permutation(rng(p)));
  cout << "No" << endl;
  return 0;
}
