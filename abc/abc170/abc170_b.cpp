#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

int main() {
  int X, Y;
  cin >> X >> Y;

  string ans = "No";
  rep(i, X + 1) {
    if (2 * i + 4 * (X - i) == Y) {
      ans = "Yes";
    };
  }

  cout << ans << endl;
  return 0;
}
