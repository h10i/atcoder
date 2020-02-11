#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)

const int64_t INF = 1LL << 60;

int main() {
  int N, W;
  cin >> N >> W;

  vector<int> weight(N), value(N);
  rep(i, N) cin >> weight[i] >> value[i];

  int MAX_VALUE = 1e5;
  vector<vector<int64_t>> dp(N + 1, vector<int64_t>(MAX_VALUE + 1));
  rep(i, N + 1) rep(v, MAX_VALUE + 1) {
    dp[i][v] = INF;
  }

  dp[0][0] = 0;

  rep(i, N) rep(v, MAX_VALUE + 1) {
    if (v >= value[i]) {
      dp[i + 1][v] = min(dp[i][v - value[i]] + weight[i], dp[i][v]);
    } else {
      dp[i + 1][v] = dp[i][v];
    }
  }

  int64_t ans = 0;
  rep(v, MAX_VALUE + 1) {
    if (dp[N][v] <= W) {
      ans = v;
    }
  }

  cout << ans << endl;
}
