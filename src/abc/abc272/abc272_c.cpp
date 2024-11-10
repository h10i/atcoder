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
  int n;
  cin >> n;
  vi a_odd, a_even;
  rep(i, n) {
    int a;
    cin >> a;
    if (a % 2 == 0) {
      a_even.push_back(a);
    } else {
      a_odd.push_back(a);
    }
  }
  sort(rng(a_odd));
  sort(rng(a_even));

  auto f = [&](vi lst) {
    int c = lst.size();
    return (c >= 2) ? lst[c - 1] + lst[c - 2] : -1;
  };

  int ans = max(f(a_odd), f(a_even));

  cout << ans << endl;
  return 0;
}
