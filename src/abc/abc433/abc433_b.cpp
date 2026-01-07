#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define drep(i, n) for (int i = (n) - 1; i >= 0; --i)
template <typename T>
using vec = vector<T>;

int main() {
  int n;
  cin >> n;
  vec<int> a(n);
  rep(i, n) cin >> a[i];

  rep(i, n) {
    int x = -1;
    drep(j, i) {
      if (a[j] > a[i]) {
        x = j + 1;
        break;
      }
    }
    cout << x << endl;
  }
  return 0;
}
