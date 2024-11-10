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

  sort(rng(s));

  auto is_palindrome = [](string x) -> bool {
    int x_size = x.size();
    rep(i, x_size / 2) if (x[i] != x[x_size - 1 - i]) return false;
    return true;
  };

  auto f = [&](string t) -> bool {
    rep(i, n - k + 1) if (is_palindrome(t.substr(i, k))) return false;
    return true;
  };

  int ans = 0;
  do {
    if (f(s)) ans++;
  } while (next_permutation(rng(s)));

  cout << ans << endl;
  return 0;
}
