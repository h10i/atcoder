#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, t) for (int i = s; i < t; ++i)
#define mins(x, y) (x = min(x, y))
using vi = vector<int>;
const int INF = 1001001001;

int main() {
  int n, k;
  cin >> n >> k;
  vi h(n);
  rep(i, n) cin >> h[i];

  vi dp(n);
  dp[1] = abs(h[1] - h[0]);

  srep(i, 2, n) {
    int min_cost = INF;
    srep(j, 1, min(i + 1, k + 1)) {
      mins(min_cost, dp[i - j] + abs(h[i] - h[i - j]));
    }
    dp[i] = min_cost;
  }

  cout << dp[n - 1] << endl;
  return 0;
}
