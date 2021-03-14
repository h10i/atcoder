#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define srep(i, s, t) for (int i = s; i < t; ++i)
#define rng(a) a.begin(), a.end()
#define rrng(a) a.rbegin(), a.rend()
#define maxs(x, y) (x = max(x, y))
#define mins(x, y) (x = min(x, y))
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
const int MOD = 1000000007;

int main() {
  int n, m;
  cin >> n >> m;
  vi a(m), b(m);
  rep(i, m) cin >> a[i] >> b[i];
  int k;
  cin >> k;
  vi c(k), d(k);
  rep(i, k) cin >> c[i] >> d[i];

  int ans = 0;
  rep(i, 1 << k) {
    vector<bool> ball(n);
    rep(j, k) {
      if (i & (1 << j)) {
        ball[c[j] - 1] = true;
      } else {
        ball[d[j] - 1] = true;
      }
    }

    int cnt = 0;
    rep(k, m) {
      if (ball[a[k] - 1] && ball[b[k] - 1]) {
        cnt++;
      }
    }
    maxs(ans, cnt);
  }

  cout << ans << endl;
  return 0;
}
