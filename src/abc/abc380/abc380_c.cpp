#include <bits/stdc++.h>
using namespace std;

#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n) - 1; i >= 0; --i)
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
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;

  vec<string> t;
  string u;
  u += s[0];
  rep(i, n - 1) {
    if (s[i] == s[i + 1]) {
      u += s[i + 1];
    } else {
      t.push_back(u);
      u = s[i + 1];
    }
  }
  t.push_back(u);

  int t_size = t.size();
  int k_cnt = 0;
  rep(i, t_size) {
    if (t[i][0] == '1') k_cnt++;
    if (k_cnt == k) {
      swap(t[i - 1], t[i]);
    }
  }

  for (string ti : t) {
    cout << ti;
  }
  cout << endl;
  return 0;
}
