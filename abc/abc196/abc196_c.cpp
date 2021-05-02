#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define srep(i, s, t) for (int i = s; i < t; ++i)
#define rng(a) a.begin(), a.end()
#define rrng(a) a.rbegin(), a.rend()
#define maxs(x, y) (x = max(x, y))
#define mins(x, y) (x = min(x, y))
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
const int MOD = 1000000007;

ll solve(string n) {
  int s = n.size();
  if (s % 2 != 0) {
    int ans = 0;
    rep(i, s / 2) ans += 9 * pow(10, i);
    return ans;
  }

  ll base = pow(10, s / 2);
  ll x = stoll(n);
  ll l = x / base;
  ll r = x % base;
  if (l > r) l--;
  return l;
}

int main() {
  string n;
  cin >> n;
  cout << solve(n) << endl;
  return 0;
}
