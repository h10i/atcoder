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
  int n;
  cin >> n;

  ll ans = 0;
  srep(ab, 1, n) {
    ll x = 0;
    for (int b = 1; b * b <= ab; b++) {
      if (ab % b == 0) {
        x++;
        if (ab != b * b) x++;
      }
    }
    int cd = n - ab;
    ll y = 0;
    for (int d = 1; d * d <= cd; d++) {
      if (cd % d == 0) {
        y++;
        if (cd != d * d) y++;
      }
    }
    ans += x * y;
  }
  cout << ans << endl;
  return 0;
}
