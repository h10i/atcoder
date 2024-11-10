#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)

int main() {
  int N, W;
  cin >> N >> W;

  vector<int> weight(N), value(N);
  rep(i, N) {
    cin >> weight[i] >> value[i];
  }

  vector<vector<int64_t>> dp(N + 1, vector<int64_t>(W + 1));
  rep(i, N) rep(w, W + 1) {
    if (w >= weight[i]) {
      dp[i + 1][w] = max(dp[i][w - weight[i]] + value[i], dp[i][w]);
    } else {
      dp[i + 1][w] = dp[i][w];
    }
  }

  cout << dp[N][W] << endl;
}
