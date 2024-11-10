#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, t) for (int i = s; i < t; ++i)
using namespace std;
using ll = long long;
using vi = vector<int>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;

int main() {
  string S, T;
  cin >> S >> T;
  int ans = INF;
  rep(i, S.size() - T.size() + 1) {
    int cnt = 0;
    rep(j, T.size()) {
      if (S[i + j] != T[j]) cnt++;
    }
    ans = min(ans, cnt);
  }
  cout << ans << endl;
  return 0;
}
