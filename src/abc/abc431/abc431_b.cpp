#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
template <typename T>
using vec = vector<T>;

int main() {
  int x, n;
  cin >> x;
  cin >> n;
  vec<int> w(n);
  rep(i, n) cin >> w[i];
  int q;
  cin >> q;
  vec<bool> attached(n);
  int total_w = x;
  rep(i, q) {
    int p;
    cin >> p;
    p--;
    total_w += (attached[p] ? -w[p] : w[p]);
    attached[p] = !attached[p];
    cout << total_w << endl;
  }
  return 0;
}
