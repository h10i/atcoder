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

enum Subject { MATH, ENGLISH, TOTAL };

int main() {
  int n, x, y, z;
  cin >> n >> x >> y >> z;
  vi a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];

  vector<P> math(n), english(n), total(n);
  rep(i, n) {
    math[i] = make_pair(i, a[i]);
    english[i] = make_pair(i, b[i]);
    total[i] = make_pair(i, a[i] + b[i]);
  }

  auto comp = [&](P s, P t) -> bool {
    return s.second == t.second ? s.first < t.first : s.second > t.second;
  };
  vector<bool> passed(n);
  vi ans;
  auto f = [&](vector<P>& score, int cnt) {
    sort(rng(score), comp);
    int i = 0;
    while (cnt > 0) {
      int num = score[i].first;
      i++;
      if (passed[num]) continue;
      ans.push_back(num + 1);
      passed[num] = true;
      cnt--;
    }
  };
  f(math, x);
  f(english, y);
  f(total, z);
  sort(rng(ans));
  for (int v : ans) cout << v << endl;
  return 0;
}
