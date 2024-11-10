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
  string s;
  cin >> s;

  auto in = [](string num, char c) -> bool {
    for (char ni : num) {
      if (ni == c) return true;
    }
    return false;
  };

  auto check = [&](string num) -> bool {
    rep(i, 10) {
      char n = i + '0';
      if (s[i] == '?') continue;
      bool include_n = in(num, n);
      if (s[i] == 'o' && !include_n) return false;
      if (s[i] == 'x' && include_n) return false;
    }
    return true;
  };

  int ans = 0;
  rep(i, 10000) {
    string num = to_string(i);
    num.insert(0, 4 - num.size(), '0');
    if (check(num)) ans++;
  }
  cout << ans << endl;
  return 0;
}
