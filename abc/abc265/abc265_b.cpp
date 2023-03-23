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
  int n, m;
  ll t;
  cin >> n >> m >> t;
  vi a(n);
  srep(i, 1, n) cin >> a[i];
  vi bonus(n + 1);
  rep(i, m) {
    int x, y;
    cin >> x >> y;
    bonus[x] = y;
  }

  srep(i, 1, n) {
    if (t <= a[i]) {
      cout << "No" << endl;
      return 0;
    }
    t -= a[i];
    t += bonus[i + 1];
  }
  cout << "Yes" << endl;
  return 0;
}
