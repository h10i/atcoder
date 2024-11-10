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

int calc_score(string cards, int card) {
  vi count(10, 0);
  rep(i, 4) count[cards[i] - '0']++;
  count[card]++;
  int score = 0;
  srep(i, 1, 10) {
    score += i * pow(10, count[i]);
  }
  return score;
}

int main() {
  int k;
  string s, t;
  cin >> k >> s >> t;

  vi deck(10, k);
  rep(i, 4) {
    deck[s[i] - '0']--;
    deck[t[i] - '0']--;
  }

  vi score_s(10), score_t(10);
  srep(card, 1, 10) {
    score_s[card] = calc_score(s, card);
    score_t[card] = calc_score(t, card);
  }

  ll a = 0, b = 0;
  srep(i, 1, 10) {
    if (deck[i] == 0) continue;
    deck[i]--;
    srep(j, 1, 10) {
      if (deck[j] == 0) continue;
      ll x = (ll)(deck[i] + 1) * deck[j];
      if (score_s[i] > score_t[j]) a += x;
      b += x;
    }
    deck[i]++;
  }

  double ans = (double)a / b;
  printf("%.10f\n", ans);
  return 0;
}
