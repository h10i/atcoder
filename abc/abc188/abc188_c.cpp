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
  int n;
  cin >> n;
  vi a(pow(2, n));
  rep(i, pow(2, n)) cin >> a[i];

  int mid = pow(2, n - 1);
  auto left_mx = max_element(a.begin(), a.begin() + mid);
  int left_i = distance(a.begin(), left_mx);
  auto right_mx = max_element(a.begin() + mid, a.end());
  int right_i = distance(a.begin(), right_mx);

  cout << (*left_mx > *right_mx ? right_i + 1 : left_i + 1) << endl;
  return 0;
}
