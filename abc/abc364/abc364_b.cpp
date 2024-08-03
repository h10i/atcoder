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

struct Point {
  int x;
  int y;
};

int main() {
  int h, w;
  cin >> h >> w;

  Point s;
  cin >> s.x >> s.y;
  s.x--;
  s.y--;
  vvec<char> c(h, vec<char>(w));
  rep(i, h) rep(j, w) cin >> c[i][j];
  string x;
  cin >> x;

  auto move = [&](char d, Point now) -> Point {
    Point next = now;
    if (d == 'L') next.y--;
    if (d == 'R') next.y++;
    if (d == 'U') next.x--;
    if (d == 'D') next.x++;
    if (next.x < 0 || next.x >= h || next.x < 0 || next.x >= w) return now;
    return (c[next.x][next.y] == '.' ? next : now);
  };

  for (char xi : x) {
    s = move(xi, s);
  }
  printf("%d %d\n", s.x + 1, s.y + 1);
  return 0;
}
