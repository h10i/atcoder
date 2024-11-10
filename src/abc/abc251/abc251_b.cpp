#include <bits/stdc++.h>
using namespace std;

#include <atcoder/all>
using namespace atcoder;

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define srep(i, s, t) for (int i = s; i < t; ++i)
#define rng(a) a.begin(), a.end()
#define rrng(a) a.rbegin(), a.rend()
#define maxs(x, y) (x = max(x, y))
#define mins(x, y) (x = min(x, y))
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
  int n, w;
  cin >> n >> w;
  vi a(n);
  rep(i, n) cin >> a[i];

  vector<bool> ok(w + 1);
  rep(i, n) {
    int ai = a[i];
    if (ai <= w) ok[ai] = true;
    srep(j, i + 1, n) {
      int aj = a[j];
      if (ai + aj <= w) ok[ai + aj] = true;
      srep(k, j + 1, n) {
        int ak = a[k];
        if (ai + aj + ak <= w) ok[ai + aj + ak] = true;
      }
    }
  }

  int ans = 0;
  srep(i, 1, w + 1) if (ok[i]) ans++;
  cout << ans << endl;
  return 0;
}
