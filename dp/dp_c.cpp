#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)

const int INF = 1e9;

int main() {
  int N;
  cin >> N;

  vector<vector<int>> a(N, vector<int>(3));
  rep(i, N) {
    rep(j, 3) {
      cin >> a[i][j];
    }
  }

  vector<vector<int>> dp(N, vector<int>(3));
  dp[0] = a[0];

  repi(i, 1, N) {
    rep(j, 3) {
      rep(k, 3) {
        if (j != k) {
          int point = dp[i - 1][j] + a[i][k];
          if (point > dp[i][k]) {
            dp[i][k] = point;
          }
        }
      }
    }
  }

  int ans = 0;
  rep(i, 3) {
    if (dp[N - 1][i] > ans) {
      ans = dp[N - 1][i];
    }
  }

  cout << ans << endl;
}
