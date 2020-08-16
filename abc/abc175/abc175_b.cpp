#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, t) for (int i = s; i < t; ++i)
using namespace std;
using ll = long long;
using vi = vector<int>;

int main() {
  int N;
  cin >> N;
  vi L(N);
  rep(i, N) cin >> L[i];
  sort(L.begin(), L.end());
  int ans = 0;
  rep(i, N) srep(j, i + 1, N) srep(k, j + 1, N) {
    if (L[i] == L[j]) continue;
    if (L[j] == L[k]) continue;
    if (L[k] == L[i]) continue;
    if (L[i] + L[j] > L[k]) ans++;
  }

  cout << ans << endl;
  return 0;
}
