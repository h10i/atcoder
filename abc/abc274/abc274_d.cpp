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

bool check(int x, vi a) {
  unordered_set<int> s;
  s.insert(0);
  for (int na : a) {
    unordered_set<int> p;
    swap(p, s);
    for (int nx : p) {
      s.insert(nx - na);
      s.insert(nx + na);
    }
  }
  return s.count(x);
}

int main() {
  int n, x, y;
  cin >> n >> x >> y;
  vi a(n);
  rep(i, n) cin >> a[i];
  x -= a[0];
  vi ax, ay;
  srep(i, 1, n) {
    if (i % 2 == 0) {
      ax.push_back(a[i]);
    } else {
      ay.push_back(a[i]);
    }
  }

  cout << (check(x, ax) && check(y, ay) ? "Yes" : "No") << endl;

  return 0;
}
