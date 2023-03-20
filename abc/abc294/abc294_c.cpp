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

void print_ans(vi x) {
  int x_size = x.size();
  rep(i, x_size) cout << x[i] << (i < x_size - 1 ? " " : "\n");
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<P> a(n);
  rep(i, n) {
    int x;
    cin >> x;
    a[i] = make_pair(x, i);
  }
  sort(rng(a));
  vector<P> b(m);
  rep(i, m) {
    int x;
    cin >> x;
    b[i] = make_pair(x, i);
  }
  sort(rng(b));

  vi ans_a(n), ans_b(m);
  int i_a = 0, i_b = 0, i_c = 1;
  while (i_c <= n + m) {
    P ai = (i_a < n ? a[i_a] : make_pair(INF, -1));
    P bi = (i_b < m ? b[i_b] : make_pair(INF, -1));
    if (ai.first < bi.first) {
      ans_a[ai.second] = i_c;
      i_a++;
    } else {
      ans_b[bi.second] = i_c;
      i_b++;
    }
    i_c++;
  }
  print_ans(ans_a);
  print_ans(ans_b);
  return 0;
}
