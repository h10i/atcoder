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
  int k;
  cin >> k;
  string s, t;
  cin >> s >> t;

  auto f = [&]() -> bool {
    if (s == t) return true;
    int s_size = s.size(), t_size = t.size();
    int d = s_size - t_size;
    if (d == 0) {
      int c = 0;
      rep(i, s_size) {
        if (s[i] != t[i]) c++;
        if (c > 1) return false;
      }
      return true;
    } else if (d == 1) {
      int si = 0;
      rep(ti, t_size) {
        if (s[si] != t[ti]) si++;
        si++;
        if (ti + 2 < si) return false;
      }
      return true;
    } else if (d == -1) {
      int ti = 0;
      rep(si, s_size) {
        if (s[si] != t[ti]) ti++;
        ti++;
        if (si + 2 < ti) return false;
      }
      return true;
    }
    return false;
  };

  cout << (f() ? "Yes" : "No") << endl;
  return 0;
}
