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

struct D {
  ll v, l;
};

int main() {
  ll l;
  int n1, n2;
  cin >> l >> n1 >> n2;
  vec<D> d1(n1);
  rep(i, n1) cin >> d1[i].v >> d1[i].l;
  vec<D> d2(n2);
  rep(i, n2) cin >> d2[i].v >> d2[i].l;

  ll ans = 0, t1 = 0, t2 = 0;
  int i = 0, j = 0;
  while (i < n1 && j < n2) {
    ll r1 = t1 + d1[i].l, r2 = t2 + d2[j].l;
    if (d1[i].v == d2[j].v) {
      ans += min(r1, r2) - max(t1, t2);
    }
    if (r1 < r2) {
      t1 += d1[i].l;
      i++;
    } else {
      t2 += d2[j].l;
      j++;
    }
  }
  cout << ans << endl;
  return 0;
}
