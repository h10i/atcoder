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
  int N;
  cin >> N;
  vector<ll> x(N);
  ll m_dist = 0, e_dist = 0, c_dist = -LINF;
  rep(i, N) {
    ll x;
    cin >> x;
    m_dist += abs(x);
    e_dist += abs(x) * abs(x);
    maxs(c_dist, abs(x));
  }

  cout << m_dist << endl;
  printf("%.10f\n", sqrt(e_dist));
  cout << c_dist << endl;
  return 0;
}
