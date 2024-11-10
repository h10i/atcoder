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
  int N, M, T;
  cin >> N >> M >> T;
  vi A(M);
  vi B(M);
  rep(i, M) cin >> A[i] >> B[i];
  int now = 0;
  int r = N;
  rep(i, M) {
    r -= (A[i] - now);
    if (r <= 0) {
      cout << "No" << endl;
      return 0;
    }
    r = min(r + (B[i] - A[i]), N);
    now = B[i];
  }
  r -= T - now;

  cout << (r <= 0 ? "No" : "Yes") << endl;
  return 0;
}
