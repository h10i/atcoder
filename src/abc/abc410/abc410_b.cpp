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
  int n, q;
  cin >> n >> q;
  vi x(q);
  rep(i, q) cin >> x[i];

  vi box(n + 1), ans;
  rep(i, q) {
    if (x[i] >= 1) {
      box[x[i]]++;
      ans.push_back(x[i]);
      continue;
    }
    int c_min = INF, i_box = INF;
    rrep(i, n) {
      if (box[i] < c_min) {
        c_min = box[i];
        i_box = i;
      }
    }
    box[i_box]++;
    ans.push_back(i_box);
  }

  rep(i, q) cout << ans[i] << (i < q - 1 ? ' ' : '\n');
  return 0;
}
