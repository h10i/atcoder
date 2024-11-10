#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define srep(i, s, t) for (int i = s; i < t; ++i)
#define rng(a) a.begin(), a.end()
#define rrng(a) a.rbegin(), a.rend()
#define maxs(x, y) (x = max(x, y))
#define mins(x, y) (x = min(x, y))
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
const int MOD = 1000000007;

int solve(string N) {
  int ans = -1;
  int min_cnt = N.size();

  rep(bit, 1 << N.size()) {
    int total = 0;
    int cnt = N.size();

    rep(i, N.size()) {
      if (bit & 1 << i) {
        total += N[i] - '0';
        cnt--;
      }
    }

    if (total != 0 && total % 3 == 0) {
      min_cnt = min(min_cnt, cnt);
      ans = min_cnt;
    }
  }

  return ans;
}

int main() {
  string N;
  cin >> N;
  cout << solve(N) << endl;
  return 0;
}
