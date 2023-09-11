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
  int h, w, n;
  cin >> h >> w >> n;
  vi a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  auto compress = [](vi x) -> unordered_map<int, int> {
    unordered_map<int, int> mp;
    int idx = 1;
    for (int num : set<int>(rng(x))) {
      mp[num] = idx;
      idx++;
    }
    return mp;
  };

  unordered_map<int, int> a_compressed = compress(a);
  unordered_map<int, int> b_compressed = compress(b);
  rep(i, n) cout << a_compressed[a[i]] << " " << b_compressed[b[i]] << endl;
  return 0;
}
