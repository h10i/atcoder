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

int solve() {
  int N, M;
  cin >> N >> M;
  vi A(M + 2);
  A[M] = 0;
  A[M + 1] = N + 1;
  rep(i, M) cin >> A[i];
  sort(rng(A));

  if (M == N) return 0;
  if (M == 0) return 1;

  int k = INF;
  vi C(M + 1);
  rep(i, M + 1) {
    C[i] = A[i + 1] - A[i] - 1;
    if (C[i] > 0) mins(k, C[i]);
  }
  int ans = 0;
  rep(i, M + 1) {
    ans += (C[i] + k - 1) / k;
  }

  return ans;
}

int main() {
  cout << solve() << endl;
  return 0;
}
