#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repi(i, a, b) for (int i = (int)(a); i < (int)(b); i++)

const int INF = 1e9;

int main() {
  int N;
  cin >> N;

  vector<int> a(N);
  rep(i, N) {
    cin >> a[i];
  }

  vector<int> dp(N);
  dp[1] = abs(a[1] - a[0]);

  repi(i, 2, N) {
    int cost1 = abs(a[i] - a[i - 1]);
    int cost2 = abs(a[i] - a[i - 2]);
    dp[i] = min(dp[i - 1] + cost1, dp[i - 2] + cost2);
  }

  cout << dp[N - 1] << endl;
}
