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

int g1(int n) {
  string s = to_string(n);
  sort(rrng(s));
  return stoi(s);
}

int g2(int n) {
  string s = to_string(n);
  sort(rng(s));
  return stoi(s);
}

int f(int n) {
  return g1(n) - g2(n);
}

int solve(int n, int k) {
  int a = n;
  rep(i, k) a = f(a);
  return a;
}

int main() {
  int n, k;
  cin >> n >> k;
  cout << solve(n, k) << endl;
  return 0;
}
