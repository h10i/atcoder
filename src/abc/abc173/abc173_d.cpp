#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define srep(i, s, t) for (int i = s; i < t; ++i)
#define rng(a) a.begin(), a.end()
#define rrng(a) a.rbegin(), a.rend()
using namespace std;
using ll = long long;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  sort(rrng(a));
  ll ans = 0 + a[0];
  int i = 1, cnt = 2;
  while (cnt < n) {
    ans += a[i];
    cnt++;
    if (cnt % 2 == 0) i++;
  }
  cout << ans << endl;
  return 0;
}
