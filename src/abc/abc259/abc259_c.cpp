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
using P = pair<char, int>;
using T = tuple<int, int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
const int MOD = 1000000007;

int main() {
  string s, t;
  cin >> s >> t;

  auto f = [&](string x, vector<P>& memo) -> void {
    int x_size = x.size(), i = 0;
    while (i < x_size) {
      int c = 1;
      srep(j, i + 1, x_size) {
        if (x[j - 1] != x[j]) break;
        c++;
      }
      memo.emplace_back(x[i], c);
      i += c;
    }
  };
  vector<P> u, v;
  f(s, u);
  f(t, v);
  int u_size = u.size(), v_size = v.size();
  bool ok = (u_size == v_size);
  if (ok) {
    rep(i, u_size) {
      auto [u_char, u_size] = u[i];
      auto [v_char, v_size] = v[i];
      ok &= (u_char == v_char);
      ok &= ((u_size == v_size) || ((u_size >= 2 && (u_size < v_size))));
      if (!ok) break;
    }
  }
  cout << (ok ? "Yes" : "No") << endl;
  return 0;
}
