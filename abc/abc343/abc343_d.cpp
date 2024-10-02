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

int main() {
  int n, t;
  cin >> n >> t;
  vi a(t), b(t);
  rep(i, t) {
    cin >> a[i] >> b[i];
    a[i]--;
  }

  int ans = 1;
  vec<ll> score(n);
  unordered_map<ll, int> count;
  count[0] = n;
  rep(i, t) {
    int player = a[i];
    ll score_now = score[player];
    count[score_now]--;
    if (count[score_now] == 0) ans--;

    ll score_next = score_now + b[i];
    score[player] = score_next;
    count[score_next]++;
    if (count[score_next] == 1) ans++;
    cout << ans << endl;
  }
  return 0;
}
