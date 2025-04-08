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
  int n, m;
  cin >> n >> m;
  vi a(n);
  rep(i, n) cin >> a[i];

  auto get_pf = [&](int x) -> vi {
    vi res;
    for (int i = 2; i * i <= x; ++i) {
      while (x % i == 0) {
        x /= i;
        res.push_back(i);
      }
    }
    if (x != 1) res.push_back(x);
    return res;
  };

  int a_max = 1e5 + 1;
  vec<bool> ng(a_max, false);
  for (int v : a) {
    vi pf = get_pf(v);
    for (int p : pf) {
      ng[p] = true;
    }
  }

  rrep(i, m) {
    if (!ng[i]) continue;
    for (int x = i + i; x <= m; x += i) {
      ng[x] = true;
    }
  }

  vi ans;
  rrep(i, m) if (!ng[i]) ans.push_back(i);
  int ans_size = ans.size();
  cout << ans_size << endl;
  for (int v : ans) cout << v << endl;
  return 0;
}
