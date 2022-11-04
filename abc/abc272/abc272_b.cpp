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
using vb = vector<bool>;
using vvb = vector<vb>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
const int MOD = 1000000007;

int main() {
  int n, m;
  cin >> n >> m;
  vvb check(n, vb(n, false));
  rep(i, m) {
    int k;
    cin >> k;
    vi x(k);
    rep(j, k) cin >> x[j];
    rep(j, k) srep(l, j + 1, k) {
      check[x[j] - 1][x[l] - 1] = true;
    }
  }

  bool ans = true;
  rep(i, n) srep(j, i + 1, n) {
    ans &= check[i][j];
  }
  cout << (ans ? "Yes" : "No") << endl;
  return 0;
}
