#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;

const int M = 1000005;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  sort(A.begin(), A.end());

  vector<int> cnt(M);
  for (int x : A) {
    if (cnt[x] != 0) {
      cnt[x]++;
      continue;
    }

    for (int i = x; i < M; i += x) {
      cnt[i]++;
    }
  }

  int ans = 0;
  for (int x : A) {
    if (cnt[x] == 1) {
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}
