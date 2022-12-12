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
using vll = vector<ll>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
const int MOD = 1000000007;

int main() {
  int n;
  cin >> n;
  vll a(n + 1);
  rep(i, n) cin >> a[i + 1];
  int q;
  cin >> q;
  ll query1_val = -1;
  map<int, ll> q1mp;
  rep(i, q) {
    int query;
    cin >> query;
    if (query == 1) {
      cin >> query1_val;
      q1mp.clear();
    }
    if (query == 2) {
      int iq;
      ll xq;
      cin >> iq >> xq;
      q1mp[iq] += xq;
    }
    if (query == 3) {
      int iq;
      cin >> iq;
      if (query1_val >= 0) {
        cout << query1_val + q1mp[iq] << "\n";
      } else {
        cout << a[iq] + q1mp[iq] << "\n";
      }
    }
  }

  return 0;
}
