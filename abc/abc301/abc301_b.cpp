#include <bits/stdc++.h>
using namespace std;

#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define srep(i, s, t) for (int i = s; i < t; ++i)
#define rng(a) a.begin(), a.end()
#define rrng(a) a.rbegin(), a.rend()
#define maxs(x, y) (x = max(x, y))
#define mins(x, y) (x = min(x, y))
template <typename T>
using vec = vector<T>;
template <typename T>
using vvec = vec<vec<T>>;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using vi = vec<int>;
using vvi = vvec<int>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
const int MOD = 1000000007;

int main() {
  int n;
  cin >> n;
  vi a(n);
  rep(i, n) cin >> a[i];

  rep(i, n - 1) {
    cout << a[i] << " ";
    if (abs(a[i] - a[i + 1]) == 1) continue;
    if (a[i] < a[i + 1]) {
      srep(j, a[i] + 1, a[i + 1]) cout << j << " ";
    } else if (a[i] > a[i + 1]) {
      for (int j = a[i] - 1; j > a[i + 1]; j--) {
        cout << j << " ";
      }
    }
  }
  cout << a[n - 1] << endl;
  return 0;
}
