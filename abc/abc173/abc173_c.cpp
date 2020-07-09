#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define srep(i, s, t) for (int i = s; i < t; ++i)
using namespace std;
using ll = long long;

int main() {
  int h, w, k;
  cin >> h >> w >> k;
  vector<string> c(h);
  rep(i, h) cin >> c[i];

  int ans = 0;
  rep(ih, 1 << h) rep(jw, 1 << w) {
    int cnt = 0;
    rep(i, h) rep(j, w) {
      if (ih >> i & 1) continue;
      if (jw >> j & 1) continue;
      if (c[i][j] == '#') cnt++;
    }
    if (cnt == k) ans++;
  }

  cout << ans << endl;
  return 0;
}
