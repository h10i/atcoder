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
using vll = vector<ll>;
using vvll = vector<vll>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
const int MOD = 1000000007;

ll comb(int n, int k) {
  vvll v(n + 1, vll(n + 1));
  rep(i, n + 1) {
    v[i][0] = 1;
    v[i][i] = 1;
  }
  srep(i, 2, n + 1) srep(j, 1, i) {
    v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
  }
  return v[n][k];
}

int main() {
  int L;
  cin >> L;
  cout << comb(L - 1, 11) << endl;
  return 0;
}
