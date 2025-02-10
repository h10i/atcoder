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
  int h, w, x, y;
  cin >> h >> w >> x >> y;
  x--;
  y--;
  vec<string> s(h);
  rep(i, h) cin >> s[i];
  string t;
  cin >> t;

  int ans = 0;
  vvec<bool> visited(h, vec<bool>(w));
  auto move = [&s, &h, &w, &ans, &visited](P p, char c) -> P {
    auto [nx, ny] = p;
    if (c == 'U') nx--;
    if (c == 'D') nx++;
    if (c == 'L') ny--;
    if (c == 'R') ny++;
    if (nx < 0 || nx >= h) return p;
    if (ny < 0 || ny >= w) return p;
    if (s[nx][ny] == '#') return p;
    if (s[nx][ny] == '@' && !visited[nx][ny]) {
      visited[nx][ny] = true;
      ans++;
    }
    return make_pair(nx, ny);
  };

  P now = make_pair(x, y);
  for (char c : t) {
    now = move(now, c);
  }
  printf("%d %d %d\n", now.first + 1, now.second + 1, ans);
  return 0;
}
