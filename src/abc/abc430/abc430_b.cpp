#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, t) for (int i = s; i < t; ++i)
template <typename T>
using vec = vector<T>;

int main() {
  int n, m;
  cin >> n >> m;
  vec<string> s(n);
  rep(i, n) cin >> s[i];

  set<vec<string>> subgrid_set;
  rep(i, n - m + 1) rep(j, n - m + 1) {
    vec<string> subgrid;
    srep(x, i, i + m) subgrid.push_back(s[x].substr(j, m));
    subgrid_set.insert(subgrid);
  }

  cout << subgrid_set.size() << endl;
  return 0;
}
