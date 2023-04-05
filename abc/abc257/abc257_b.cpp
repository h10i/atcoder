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
  int n, k, q;
  cin >> n >> k >> q;
  vi a(k);
  rep(i, k) {
    cin >> a[i];
    a[i]--;
  }

  rep(i, q) {
    int l;
    cin >> l;
    l--;
    if (a[l] == n - 1) continue;
    if (a[l] + 1 == a[l + 1]) continue;
    a[l]++;
  }

  rep(i, k) cout << a[i] + 1 << (i < k - 1 ? " " : "\n");
  return 0;
}
