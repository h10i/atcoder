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
  int n = 5;
  vi p(n);
  rep(i, n) cin >> p[i];

  vec<pair<int, string>> s;
  srep(i, 1, 1 << n) {
    int total_score = 0;
    string name = "";
    rep(j, n) {
      if (i & (1 << j)) {
        total_score += p[j];
        name += "ABCDE"[j];
      }
    }
    s.emplace_back(total_score, name);
  }

  sort(rng(s), [](const pair<int, string>& a, const pair<int, string>& b) {
    if (a.first != b.first) return a.first > b.first;
    return a.second < b.second;
  });

  for (auto [score, name] : s) {
    cout << name << endl;
  }
  return 0;
}
