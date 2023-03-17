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

bool is_standing(char c) {
  return c == '1';
}

bool is_split(string s) {
  if (is_standing(s[0])) return false;
  int l_size = 7;
  vector<bool> line(l_size);
  line[0] = is_standing(s[6]);
  line[1] = is_standing(s[3]);
  line[2] = is_standing(s[1]) || is_standing(s[7]);
  line[3] = is_standing(s[0]) || is_standing(s[4]);
  line[4] = is_standing(s[2]) || is_standing(s[8]);
  line[5] = is_standing(s[5]);
  line[6] = is_standing(s[9]);

  rep(i, l_size - 2) srep(j, i + 2, l_size) {
    if (!line[i] || !line[j]) continue;
    srep(k, i + 1, j) if (!line[k]) return true;
  }
  return false;
}

int main() {
  string s;
  cin >> s;

  cout << (is_split(s) ? "Yes" : "No") << endl;
  return 0;
}
