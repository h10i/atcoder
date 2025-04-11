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

struct Train {
  int front = -1;
  int rear = -1;
};

int main() {
  int n, q;
  cin >> n >> q;
  vec<Train> trains(n);

  auto find_front = [&](int x) -> int {
    while (trains[x].front != -1) {
      x = trains[x].front;
    }
    return x;
  };
  rep(i, q) {
    int query;
    cin >> query;
    if (query == 1) {
      int x, y;
      cin >> x >> y;
      x--, y--;
      trains[x].rear = y;
      trains[y].front = x;
    } else if (query == 2) {
      int x, y;
      cin >> x >> y;
      x--, y--;
      trains[x].rear = -1;
      trains[y].front = -1;
    } else {
      int x;
      cin >> x;
      x--;
      int s = find_front(x);
      vi ans;
      while (s != -1) {
        ans.push_back(s + 1);
        s = trains[s].rear;
      }
      int m = ans.size();
      cout << m << ' ';
      rep(i, m) cout << ans[i] << (i < m - 1 ? ' ' : '\n');
    }
  }
  return 0;
}
