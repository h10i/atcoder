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
  int n;
  cin >> n;
  vvi a(n, vi(n));
  rep(i, n) {
    string s;
    cin >> s;
    rep(j, n) a[i][j] = s[j] - '0';
  }

  vvi b(n, vi(n));
  rep(i, n) rep(j, n) {
    if (i < n - 1 && j == 0) {
      b[i][j] = a[i + 1][j];
    } else if (i == 0 && j > 0) {
      b[i][j] = a[i][j - 1];
    } else if (i > 0 && j == n - 1) {
      b[i][j] = a[i - 1][j];
    } else if (i == n - 1 && j < n - 1) {
      b[i][j] = a[i][j + 1];
    } else {
      b[i][j] = a[i][j];
    }
  }
  rep(i, n) {
    rep(j, n) cout << b[i][j];
    cout << endl;
  }
  return 0;
}
