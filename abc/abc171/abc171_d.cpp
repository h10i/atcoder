#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rng(a) a.begin(), a.end()
using namespace std;
using ll = long long;

const int MX = 100005;

int main() {
  int n;
  cin >> n;
  vector<ll> cnt(MX);
  rep(i, n) {
    int a;
    cin >> a;
    cnt[a]++;
  }

  ll s = 0;
  rep(i, MX) s += i * cnt[i];

  int q;
  cin >> q;
  rep(i, q) {
    int b, c;
    cin >> b >> c;
    s += c * cnt[b] - b * cnt[b];
    cnt[c] += cnt[b];
    cnt[b] = 0;
    cout << s << endl;
  }

  return 0;
}
