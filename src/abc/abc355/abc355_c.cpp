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
  int n, t;
  cin >> n >> t;
  vi a(t);
  rep(i, t) {
    cin >> a[i];
    a[i]--;
  }

  vi row(n), col(n), diag(2);
  auto is_bingo = [&](int x, int y) -> bool {
    row[x]++;
    col[y]++;
    if (x == y) diag[0]++;
    if (x + y == n - 1) diag[1]++;
    return row[x] == n || col[y] == n || diag[0] == n || diag[1] == n;
  };
  rep(i, t) {
    if (is_bingo(a[i] / n, a[i] % n)) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}
