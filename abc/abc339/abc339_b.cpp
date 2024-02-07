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
  int h, w, n;
  cin >> h >> w >> n;

  vvec<char> t(h, vec<char>(w, '.'));
  int x = 0, y = 0, z = 0;
  vi dx = {-1, 0, 1, 0};
  vi dy = {0, 1, 0, -1};
  auto f = [&]() -> void {
    if (t[x][y] == '.') {
      t[x][y] = '#';
      z = (z + 1) % 4;
    } else {
      t[x][y] = '.';
      z = (z + 3) % 4;
    }
    x = (x + dx[z] + h) % h;
    y = (y + dy[z] + w) % w;
  };

  rep(i, n) f();
  rep(i, h) {
    rep(j, w) cout << t[i][j];
    cout << endl;
  }
  return 0;
}
