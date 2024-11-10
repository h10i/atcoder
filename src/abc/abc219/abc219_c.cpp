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
  string x;
  cin >> x;
  int n;
  cin >> n;
  vec<string> s(n);
  rep(i, n) cin >> s[i];

  map<char, int> dict;
  rep(i, 26) dict[x[i]] = i;
  auto comp = [&](string& a, string& b) -> bool {
    int a_size = a.size(), b_size = b.size();
    rep(i, min(a_size, b_size)) {
      if (a[i] == b[i]) continue;
      return dict[a[i]] < dict[b[i]];
    }
    return a_size < b_size;
  };
  sort(rng(s), comp);
  for (string si : s) cout << si << endl;
  return 0;
}
