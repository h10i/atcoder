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
  ll n;
  int m;
  cin >> n >> m;
  vi a(m), b(m);
  rep(i, m) {
    cin >> a[i] >> b[i];
    a[i]--;
    b[i]--;
  }

  set<P> s;
  int d_size = 8;
  vi dx = {2, 1, -1, -2, -2, -1, 1, 2};
  vi dy = {1, 2, 2, 1, -1, -2, -2, -1};
  auto place = [&](int x, int y) {
    s.insert(make_pair(x, y));
    rep(i, d_size) {
      int nx = x + dx[i], ny = y + dy[i];
      if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
      s.insert(make_pair(nx, ny));
    }
  };

  rep(i, m) place(a[i], b[i]);
  ll ans = n * n - s.size();
  cout << ans << endl;
  return 0;
}
