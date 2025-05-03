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
  vi k(m);
  vvi a(m);
  rep(i, m) {
    cin >> k[i];
    a[i].resize(k[i]);
    rep(j, k[i]) cin >> a[i][j];
  }
  map<int, int> mp;
  vi b(n);
  rep(i, n) {
    cin >> b[i];
    mp[b[i]] = i;
  }

  vi cnt(n);
  rep(i, m) {
    int d = -1;
    rep(j, k[i]) maxs(d, mp[a[i][j]]);
    cnt[d]++;
  }
  int ans = 0;
  rep(i, n) {
    ans += cnt[i];
    cout << ans << endl;
  }
  return 0;
}
