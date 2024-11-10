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
  int n;
  cin >> n;
  vi a(n + 1);
  rrep(i, n) cin >> a[i];

  vec<bool> visited(n + 1, false);
  vi rec;
  int v = 1;
  while (!visited[v]) {
    visited[v] = true;
    rec.push_back(v);
    v = a[v];
  }

  vi ans;
  bool start = false;
  for (int u : rec) {
    if (u == v) start = true;
    if (start) ans.push_back(u);
  }
  int ans_size = ans.size();
  cout << ans_size << endl;
  rep(i, ans_size) cout << ans[i] << (i < ans_size - 1 ? " " : "\n");
  return 0;
}
