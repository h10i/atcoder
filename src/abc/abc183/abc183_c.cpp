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

int main() {
  int N, K;
  cin >> N >> K;
  int T[8][8];
  rep(i, N) rep(j, N) cin >> T[i][j];
  vi nums(N - 1);
  iota(rng(nums), 1);
  int ans = 0;

  do {
    int t = T[0][nums[0]];
    rep(i, N - 2) t += T[nums[i]][nums[i + 1]];
    t += T[nums[N - 2]][0];
    if (t == K) ans++;
  } while (next_permutation(rng(nums)));

  cout << ans << endl;
  return 0;
}
