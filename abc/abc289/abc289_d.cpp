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
  vi a(n);
  rep(i, n) cin >> a[i];
  int m;
  cin >> m;
  vi b(m);
  rep(i, m) cin >> b[i];
  int x;
  cin >> x;

  const int mx = 1000000;
  vector<bool> is_trap(mx, false);
  for (int bi : b) is_trap[bi] = true;
  vector<bool> is_ok(mx, false);
  is_ok[0] = true;
  rep(i, x) {
    if (!is_ok[i]) continue;
    for (int ai : a) {
      int j = i + ai;
      if (!is_trap[j]) is_ok[j] = true;
    }
  }
  cout << (is_ok[x] ? "Yes" : "No") << endl;
  return 0;
}
