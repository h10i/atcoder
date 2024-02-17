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

  vvec<string> x(n, vec<string>(n));
  vi dx = {1, 0, -1, 0};
  vi dy = {0, 1, 0, -1};
  int di = 0;
  auto next = [&](auto next, P q) -> P {
    int s = q.first + dx[di];
    int t = q.second + dy[di];
    if (s >= 0 && s < n && t >= 0 && t < n && x[s][t].empty()) {
      return make_pair(s, t);
    } else {
      di = (di + 1) % 4;
      return next(next, q);
    }
  };

  P p = make_pair(0, 0);
  x[p.first][p.second] = "1";
  srep(num, 2, n * n) {
    p = next(next, p);
    x[p.first][p.second] = to_string(num);
  }
  x[n / 2][n / 2] = "T";
  rep(i, n) rep(j, n) {
    cout << x[i][j] << (j < n - 1 ? " " : "\n");
  }
  return 0;
}
