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
  int q;
  cin >> q;
  queue<pair<ll, ll>> que;
  rep(i, q) {
    int n;
    cin >> n;
    if (n == 1) {
      ll x, c;
      cin >> x >> c;
      que.emplace(x, c);
    } else if (n == 2) {
      ll c;
      cin >> c;
      ll t = 0;
      while (c > 0) {
        pair<ll, ll>& a = que.front();
        if (a.second < c) {
          t += a.first * a.second;
          c -= a.second;
          que.pop();
        } else {
          t += a.first * c;
          a.second -= c;
          c = 0;
        }
      }
      cout << t << endl;
    }
  }
  return 0;
}
