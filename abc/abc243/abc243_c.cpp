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

struct Node {
  int y;
};

int main() {
  int n;
  cin >> n;
  vi x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];
  string s;
  cin >> s;

  auto set_default = [](map<int, int>& mp, int key, int value) -> void {
    if (mp.find(key) == mp.end()) {
      mp[key] = value;
    }
  };
  map<int, int> r_min, l_max;
  rep(i, n) {
    set_default(r_min, y[i], INF);
    set_default(l_max, y[i], -1);
    if (s[i] == 'R') mins(r_min[y[i]], x[i]);
    if (s[i] == 'L') maxs(l_max[y[i]], x[i]);
  }
  for (auto [yi, value] : r_min) {
    if (r_min[yi] < l_max[yi]) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
