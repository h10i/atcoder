#include <bits/stdc++.h>
using namespace std;

#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n) - 1; i >= 0; --i)
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

struct Card {
  int i;
  int a;
  int c;
};

int main() {
  int n;
  cin >> n;
  vec<Card> cards(n);
  rep(i, n) {
    cin >> cards[i].a >> cards[i].c;
    cards[i].i = i + 1;
  }

  sort(rng(cards), [&](const Card &x, const Card &y) { return x.a > y.a; });

  vi ans;
  int buff = INF;
  rep(i, n) {
    if (cards[i].c < buff) {
      buff = cards[i].c;
      ans.push_back(cards[i].i);
    }
  }

  sort(rng(ans));
  int ans_size = ans.size();
  cout << ans_size << endl;
  rep(i, ans_size) cout << ans[i] << (i < ans_size - 1 ? " " : "\n");
  return 0;
}
