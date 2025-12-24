#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrng(a) a.rbegin(), a.rend()
template <typename T>
using vec = vector<T>;

int main() {
  const int n = 3;
  vec<int> x(n);
  rep(i, n) cin >> x[i];

  sort(rrng(x));
  rep(i, n) cout << x[i];
  cout << endl;
  return 0;
}
