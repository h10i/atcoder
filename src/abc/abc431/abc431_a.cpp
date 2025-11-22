#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, b;
  cin >> h >> b;

  int ans = max(h - b, 0);
  cout << ans << endl;
  return 0;
}
