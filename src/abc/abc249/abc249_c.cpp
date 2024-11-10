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
  int n, k;
  cin >> n >> k;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  int ans = 0;
  rep(bit, (1 << n)) {
    map<char, int> memo;
    rep(i, n) {
      if (bit & (1 << i)) {
        for (char c : s[i]) {
          memo[c]++;
        }
      }
    }
    int cnt = 0;
    for (auto [key, value] : memo) {
      if (value == k) cnt++;
    }
    maxs(ans, cnt);
  }
  cout << ans << endl;
  return 0;
}
