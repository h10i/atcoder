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

bool lt180(P a, P b, P c) {
  P ab = make_pair(b.first - a.first, b.second - a.second);
  P ac = make_pair(c.first - a.first, c.second - a.second);
  return ab.first * ac.second - ac.first * ab.second > 0;
}

int main() {
  const int n = 4;
  vector<P> p(n);
  rep(i, n) {
    int x, y;
    cin >> x >> y;
    p[i] = make_pair(x, y);
  }

  rep(i, n) {
    if (!lt180(p[i % n], p[(i + 1) % n], p[(i + 2) % n])) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
