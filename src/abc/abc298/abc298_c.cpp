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
  int n;
  cin >> n;
  int q;
  cin >> q;

  auto print_list = [](vi x) -> void {
    int s = x.size();
    rep(i, s) cout << x[i] << (i < s - 1 ? " " : "\n");
  };
  vvi box(n + 1), card(2e5 + 1);
  rep(i, q) {
    int query;
    cin >> query;
    if (query == 1) {
      int x, y;
      cin >> x >> y;
      box[y].push_back(x);
      card[x].push_back(y);
    } else if (query == 2) {
      int x;
      cin >> x;
      sort(rng(box[x]));
      print_list(box[x]);
    } else if (query == 3) {
      int x;
      cin >> x;
      sort(rng(card[x]));
      card[x].erase(unique(rng(card[x])), card[x].end());
      print_list(card[x]);
    }
  }
  return 0;
}
