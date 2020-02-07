#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for(int i = (int)(a); i < (int)(b); i++)

const int INF = 1e9;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> h(N);
  rep(i, N) {
    cin >> h[i];
  }

  vector<int> dp(N);
  dp[1] = abs(h[1] - h[0]);

  repi(i, 2, N) {
    int min_cost = INF;

    repi(j, 1, min(i + 1, K + 1)) {
      int cost = dp[i - j] + abs(h[i] - h[i - j]);
      if (cost < min_cost) {
        min_cost = cost;
      }
    }

    dp[i] = min_cost;
  }

  cout << dp[N - 1] << endl;
}
