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
  Point a, b, c;
  for (Point* p : {&a, &b, &c}) {
    cin >> p->x >> p->y;
  }

  auto dist2 = [](Point s, Point t) -> int {
    return pow(s.x - t.x, 2) + pow(s.y - t.y, 2);
  };
  int ab2 = dist2(a, b);
  int bc2 = dist2(b, c);
  int ca2 = dist2(c, a);
  bool is_right_triangle =
      ab2 + bc2 == ca2 || bc2 + ca2 == ab2 || ca2 + ab2 == bc2;
  cout << (is_right_triangle ? "Yes" : "No") << endl;
  return 0;
}
