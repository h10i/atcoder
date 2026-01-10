#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); ++i)
template <typename T>
using vec = vector<T>;

int main() {
  int n, m;
  cin >> n >> m;
  vec<int> cnt(n), total(n);
  rep(i, n) {
    int a, b;
    cin >> a >> b;
    a--;
    cnt[a]++;
    total[a] += b;
  }

  rep(i, m) {
    double ans = (double)total[i] / cnt[i];
    printf("%.6f\n", ans);
  }
  return 0;
}
