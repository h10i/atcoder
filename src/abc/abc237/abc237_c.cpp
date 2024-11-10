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

  auto check = [&]() -> bool {
    int s_size = s.size();
    int l_cnt = 0;
    rep(i, s_size) {
      if (s[i] != 'a') break;
      l_cnt++;
    }
    int r_cnt = 0;
    drep(i, s_size) {
      if (s[i] != 'a') break;
      r_cnt++;
    }
    if (l_cnt > r_cnt) return false;
    int l_i = l_cnt, r_i = s_size - 1 - r_cnt;
    while (l_i < r_i) {
      if (s[l_i] != s[r_i]) return false;
      l_i++;
      r_i--;
    }
    return true;
  };

  cout << (check() ? "Yes" : "No") << endl;
  return 0;
}
