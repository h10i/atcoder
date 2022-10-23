#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); ++i)
using vi = vector<int>;

int main() {
  int n;
  cin >> n;
  vi h(n);
  rep(i, n) cin >> h[i];

  vi dp(n);
  dp[0] = 0;
  dp[1] = abs(h[1] - h[0]);

  rep(i, n - 2) {
    int cost1 = dp[i + 1] + abs(h[i + 2] - h[i + 1]);
    int cost2 = dp[i] + abs(h[i + 2] - h[i]);
    dp[i + 2] = min(cost1, cost2);
  }

  cout << dp[n - 1] << endl;
  return 0;
}
