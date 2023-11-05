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
  vec<string> t(n);
  rep(i, n) cin >> t[i];

  auto rotate = [&n](vec<string> &x) -> void {
    vec<string> y(n);
    rep(i, n) rep(j, n) y[i] += x[n - j - 1][i];
    x = y;
  };

  auto get_left_top = [&n](vec<string> x) -> P {
    rep(i, n) rep(j, n) {
      if (x[i][j] == '#') return make_pair(i, j);
    }
    return make_pair(-1, -1);
  };

  auto within = [&n](int x, int y) -> bool {
    return 0 <= x && x < n && 0 <= y && y < n;
  };

  auto eq_shapes = [&]() -> bool {
    int s_cnt = 0, t_cnt = 0;
    rep(i, n) rep(j, n) {
      if (s[i][j] == '#') s_cnt++;
      if (t[i][j] == '#') t_cnt++;
    }
    if (s_cnt != t_cnt) return false;

    auto [i_s, j_s] = get_left_top(s);
    auto [i_t, j_t] = get_left_top(t);
    int offset_x = i_t - i_s;
    int offset_y = j_t - j_s;
    rep(i, n) {
      int i_tx = i + offset_x;
      rep(j, n) {
        int j_ty = j + offset_y;
        char t_ij = within(i_tx, j_ty) ? t[i_tx][j_ty] : '.';
        if (s[i][j] != t_ij) return false;
      }
    }
    return true;
  };

  rep(i, 4) {
    rotate(s);
    if (eq_shapes()) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
