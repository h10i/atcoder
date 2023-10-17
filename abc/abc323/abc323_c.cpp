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
  vi a(m);
  vec<P> b(m);
  rep(i, m) {
    cin >> a[i];
    b[i].first = a[i];
    b[i].second = i;
  }
  vec<string> s(n);
  rep(i, n) cin >> s[i];

  vi score(n);
  int score_max = 0;
  rep(i, n) {
    rep(j, m) if (s[i][j] == 'o') score[i] += a[j];
    score[i] += i + 1;
    maxs(score_max, score[i]);
  }

  sort(rng(b), greater<>());
  vi ans(n);
  rep(i, n) {
    for (auto [point, no] : b) {
      if (score[i] >= score_max) break;
      if (s[i][no] == 'o') continue;
      score[i] += point;
      ans[i]++;
    }
  }

  rep(i, n) cout << ans[i] << endl;
  return 0;
}
