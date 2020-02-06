#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;

  vector<int> h(N);
  rep(i, N) {
    cin >> h[i];
  }

  vector<int> dp(N);
  dp[1] = abs(h[1] - h[0]);

  rep(i, N - 2) {
    vector<int> cost(2);
    cost[0] = abs(h[i + 2] - h[i + 1]);
    cost[1] = abs(h[i + 2] - h[i]);
    dp[i + 2] = min(dp[i + 1] + cost[0], dp[i] + cost[1]);
  }

  cout << dp[N - 1] << endl;
}
