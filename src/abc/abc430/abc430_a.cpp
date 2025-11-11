#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;

  auto violate = [&]() -> bool {
    if (a > c) return false;
    return b > d;
  };
  cout << (violate() ? "Yes" : "No") << endl;
  return 0;
}
