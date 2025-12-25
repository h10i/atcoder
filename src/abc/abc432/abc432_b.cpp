#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rng(a) a.begin(), a.end()

int main() {
  string x;
  cin >> x;

  sort(rng(x));
  const int n = x.size();
  if (x[0] == '0') {
    rep(i, n) {
      if (x[i] != '0') {
        swap(x[0], x[i]);
        break;
      }
    }
  }
  cout << x << endl;
  return 0;
}
