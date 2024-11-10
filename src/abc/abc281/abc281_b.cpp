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

bool check(string s) {
  int s_len = s.length();
  if (s_len != 8) return false;
  if (!isupper(s[0]) || !isupper(s[s_len - 1])) return false;
  int num;
  try {
    num = stoi(s.substr(1, 6));
  } catch (const std::exception& e) {
    return false;
  }
  return (100000 <= num && num <= 999999);
}

int main() {
  string s;
  cin >> s;

  cout << (check(s) ? "Yes" : "No") << endl;
  return 0;
}
