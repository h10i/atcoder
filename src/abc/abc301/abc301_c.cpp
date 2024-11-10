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
  string t;
  cin >> t;

  auto exchangeable = [](char c) -> bool {
    for (char t : "atcoder") {
      if (c == t) return true;
    }
    return false;
  };
  unordered_map<char, int> mp_s, mp_t;
  for (char c : s) mp_s[c]++;
  for (char c : t) mp_t[c]++;
  bool ok = true;
  for (char c = 'a'; c <= 'z'; c++) {
    int xs = mp_s[c], xt = mp_t[c];
    if (!exchangeable(c) && (xs != xt)) {
      ok = false;
      break;
    }
    if (xs > xt) mp_t['@'] -= xs - xt;
    if (xs < xt) mp_s['@'] -= xt - xs;
    if (mp_s['@'] < 0 || mp_s['@'] < 0) {
      ok = false;
      break;
    }
  }
  cout << (ok ? "Yes" : "No") << endl;
  return 0;
}
