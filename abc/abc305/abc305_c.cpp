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
  int h, w;
  cin >> h >> w;
  vec<string> s(h);
  rep(i, h) cin >> s[i];

  vi dx = {1, 0, -1, 0};
  vi dy = {0, 1, 0, -1};
  auto picked = [&](int x, int y) -> bool {
    if (s[x][y] == '#') return false;
    int cnt = 0;
    rep(i, 4) {
      int xi = x + dx[i], yi = y + dy[i];
      if (xi < 0 || xi >= h || yi < 0 || yi >= w) continue;
      if (s[xi][yi] == '#') cnt++;
    }
    return cnt >= 2;
  };

  rep(i, h) rep(j, w) {
    if (picked(i, j)) {
      cout << i + 1 << " " << j + 1 << endl;
      return 0;
    }
  }
  return 0;
}
