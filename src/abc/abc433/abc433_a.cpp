#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y, z;
  cin >> x >> y >> z;

  auto check = [&]() -> bool {
    int a = x - y * z;
    if (a < 0) return false;
    return a % (z - 1) == 0;
  };
  cout << (check() ? "Yes" : "No") << endl;
  return 0;
}
