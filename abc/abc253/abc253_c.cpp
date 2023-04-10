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
  int q;
  cin >> q;
  multiset<int> s;
  rep(i, q) {
    int t;
    cin >> t;
    if (t == 1) {
      int x;
      cin >> x;
      s.insert(x);
    } else if (t == 2) {
      int x, c;
      cin >> x >> c;
      rep(i, c) {
        auto it = s.find(x);
        if (it == s.end()) break;
        s.erase(it);
      }
    } else if (t == 3) {
      cout << (*s.rbegin() - *s.begin()) << endl;
    }
  }
  return 0;
}
