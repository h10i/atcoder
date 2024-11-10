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
  int n;
  string t;
  cin >> n >> t;
  vec<string> s(n);
  rep(i, n) cin >> s[i];

  int t_size = t.size();
  auto check = [&](string x) -> bool {
    int x_size = x.size();
    if (abs(t_size - x_size) > 1) return false;
    int i = 0, j = 0, error_cnt = 0;
    while (i < t_size && j < x_size) {
      if (t[i] == x[j]) {
        i++, j++;
        continue;
      }
      error_cnt++;
      if (error_cnt > 1) return false;
      if (t_size < x_size) {
        j++;
      } else if (t_size > x_size) {
        i++;
      } else {
        i++;
        j++;
      }
    }
    return true;
  };

  vi ans;
  rep(i, n) if (check(s[i])) ans.push_back(i + 1);
  int ans_size = ans.size();
  cout << ans.size() << endl;
  rep(i, ans_size) cout << ans[i] << (i < ans_size - 1 ? " " : "\n");
  return 0;
}
