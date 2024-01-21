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
  int n, q;
  cin >> n >> q;

  vec<P> t(n + q);
  rep(i, n) t[i] = P(n - i, 0);
  auto move = [](P x, char c) -> P {
    if (c == 'R') return P(x.first + 1, x.second);
    if (c == 'L') return P(x.first - 1, x.second);
    if (c == 'U') return P(x.first, x.second + 1);
    return P(x.first, x.second - 1);
  };
  int top = n - 1;
  rep(i, q) {
    int ope;
    cin >> ope;
    if (ope == 1) {
      char c;
      cin >> c;
      t[top + 1] = move(t[top], c);
      top++;
    } else {
      int p;
      cin >> p;
      P y = t[top - (p - 1)];
      cout << y.first << " " << y.second << endl;
    }
  }
  return 0;
}
