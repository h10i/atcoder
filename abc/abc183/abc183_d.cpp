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
const int MAX_T = 200005;

int main() {
  int N, W;
  cin >> N >> W;
  vector<ll> total_p(MAX_T);
  rep(i, N) {
    int s, t, p;
    cin >> s >> t >> p;
    total_p[s] += p;
    total_p[t] -= p;
  }
  rep(i, MAX_T - 1) total_p[i + 1] += total_p[i];
  rep(i, MAX_T) {
    if (total_p[i] > W) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}
