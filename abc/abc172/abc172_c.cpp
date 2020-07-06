#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
using namespace std;
using ll = long long;

int main() {
  int N, M, K;
  cin >> N >> M >> K;
  vector<ll> A(N + 1), B(M + 1);
  rep(i, N) {
    int a;
    cin >> a;
    A[i + 1] = a + A[i];
  }
  rep(i, M) {
    int b;
    cin >> b;
    B[i + 1] = b + B[i];
  }

  int ans = 0, j = M;
  rep(i, N + 1) {
    if (A[i] > K) break;
    while (B[j] > K - A[i]) {
      j--;
    }
    ans = max(ans, i + j);
  }

  cout << ans << endl;
  return 0;
}
