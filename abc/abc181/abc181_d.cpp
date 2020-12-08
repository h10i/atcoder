#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define srep(i, s, t) for (int i = s; i < t; ++i)
#define rng(a) a.begin(), a.end()
#define rrng(a) a.rbegin(), a.rend()
#define maxs(x, y) (x = max(x, y))
#define mins(x, y) (x = min(x, y))
using namespace std;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using vi = vector<int>;
using vvi = vector<vi>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
const int MOD = 1000000007;

bool solve(string s) {
  if (s.size() == 1) return s == "8";
  if (s.size() == 2) {
    if (stoi(s) % 8 == 0) return true;
    swap(s[0], s[1]);
    return stoi(s) % 8 == 0;
  }
  vi s_cnt(10);
  for (char c : s) s_cnt[c - '0']++;
  for (int i = 0; i < 1000; i += 8) {
    int x = i;
    vi cnt(10);
    rep(j, 3) {
      cnt[x % 10]++;
      x /= 10;
    }
    bool ok = true;
    rep(j, 10) if (cnt[j] > s_cnt[j]) {
      ok = false;
      break;
    }
    if (ok) return true;
  }
  return false;
}

int main() {
  string S;
  cin >> S;
  cout << (solve(S) ? "Yes" : "No") << endl;
  return 0;
}
