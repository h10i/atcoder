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
  int n, m;
  cin >> n >> m;
  vvec<char> a(n * 2, vec<char>(m));
  rep(i, n * 2) rep(j, m) cin >> a[i][j];

  enum Result { WIN, LOSE, DRAW };
  auto judge = [](char a, char b) -> Result {
    if (a == b) return DRAW;
    if (a == 'G' && b == 'C') return WIN;
    if (a == 'C' && b == 'P') return WIN;
    if (a == 'P' && b == 'G') return WIN;
    return LOSE;
  };

  vec<P> rank(n * 2);
  rep(i, n * 2) rank[i] = make_pair(i, 0);

  auto cmp = [](P &x, P &y) -> bool {
    if (x.second != y.second) return x.second > y.second;
    return x.first < y.first;
  };

  rep(i, m) {
    rep(k, n) {
      P &p1 = rank[2 * k], &p2 = rank[2 * k + 1];
      Result res = judge(a[p1.first][i], a[p2.first][i]);
      if (res == WIN) {
        p1.second++;
      } else if (res == LOSE) {
        p2.second++;
      }
    }
    sort(rng(rank), cmp);
  }

  rep(i, n * 2) cout << rank[i].first + 1 << endl;
  return 0;
}
