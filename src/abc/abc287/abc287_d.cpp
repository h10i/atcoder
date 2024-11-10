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

bool match_or_not(char a, char b) {
  return a == '?' || b == '?' || a == b;
}

int main() {
  string s, t;
  cin >> s >> t;

  int t_len = t.length();
  vi pre_match(t_len + 1, false);
  pre_match[0] = true;
  rep(i, t_len) {
    if (!match_or_not(s[i], t[i])) break;
    pre_match[i + 1] = true;
  }

  int s_len = s.length();
  vi suf_match(t_len + 1, false);
  suf_match[0] = true;
  rep(i, t_len) {
    if (!match_or_not(s[s_len - 1 - i], t[t_len - 1 - i])) break;
    suf_match[i + 1] = true;
  }

  rep(i, t_len + 1) {
    cout << (pre_match[i] && suf_match[t_len - i] ? "Yes" : "No") << endl;
  }

  return 0;
}
