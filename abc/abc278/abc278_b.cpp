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
  int h, m;
  cin >> h >> m;

  auto check = [](int x, int y) {
    int a = x / 10, b = x % 10;
    int c = y / 10, d = y % 10;
    return a * 10 + c <= 23 && b * 10 + d <= 59;
  };

  while (!check(h, m)) {
    m++;
    if (m > 59) {
      m = 0;
      h++;
    }
    if (h > 23) h = 0;
  }
  cout << h << " " << m << endl;
  return 0;
}
