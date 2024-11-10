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
  vec<string> s(n);
  rep(i, n) cin >> s[i];

  auto calc = [&](int x, int y, int dxi, int dyi) -> bool {
    int cnt = 0;
    rep(j, 6) {
      if (x < 0 || x >= n || y < 0 || y >= n) return false;
      if (s[x][y] == '#') cnt++;
      x += dxi;
      y += dyi;
    }
    return cnt >= 4;
  };

  vi dx = {1, 1, 0, 1};
  vi dy = {0, 1, 1, -1};
  rep(i, n) rep(j, n) rep(k, 4) {
    if (calc(i, j, dx[k], dy[k])) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
