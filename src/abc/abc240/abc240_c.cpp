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
  int n, x;
  cin >> n >> x;
  vi a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  const int x_max = 10000;
  vec<set<int>> memo(x_max + 1);
  memo[0].insert(0);
  rep(p, x_max + 1) {
    for (int j : memo[p]) {
      if (j == n) continue;
      int next_i = j + 1;
      memo[p + a[next_i - 1]].insert(next_i);
      memo[p + b[next_i - 1]].insert(next_i);
    }
  }
  for (int c : memo[x]) {
    if (c == n) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
