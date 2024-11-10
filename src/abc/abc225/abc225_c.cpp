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
  vvi b(n, vi(m));
  rep(i, n) rep(j, m) cin >> b[i][j];
  rep(i, n) rep(j, m) b[i][j]--;

  int i_s = b[0][0] / 7, j_s = b[0][0] % 7;
  if (j_s + m > 7) {
    cout << "No" << endl;
    return 0;
  }
  auto validator = [](int i, int j, int x) -> bool { return i * 7 + j == x; };
  rep(i, n) rep(j, m) {
    if (!validator(i_s + i, j_s + j, b[i][j])) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
