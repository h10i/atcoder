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

struct C {
  int x;
  int y;
  int z;
};

int main() {
  vec<C> c(2);
  for (auto& obj : c) {
    cin >> obj.x >> obj.y >> obj.z;
  }
  vec<C> d(2);
  for (auto& obj : d) {
    cin >> obj.x >> obj.y >> obj.z;
  }

  auto f = [](int l1, int r1, int l2, int r2) -> bool {
    return l1 < r2 && l2 < r1;
  };
  bool is_ok = f(c[0].x, c[1].x, d[0].x, d[1].x) &&
               f(c[0].y, c[1].y, d[0].y, d[1].y) &&
               f(c[0].z, c[1].z, d[0].z, d[1].z);
  cout << (is_ok ? "Yes" : "No") << endl;
  return 0;
}
