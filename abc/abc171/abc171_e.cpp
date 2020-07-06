#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int s = 0;
  rep(i, n) s ^= a[i];
  rep(i, n) a[i] ^= s;
  rep(i, n) cout << (i == 0 ? "" : " ") << a[i];
  cout << endl;

  return 0;
}
