#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rng(a) a.begin(), a.end()
using namespace std;
using ll = long long;

int main() {
  ll n;
  cin >> n;

  string ans = "";
  while (n > 0) {
    n--;
    ans += 'a' + n % 26;
    n /= 26;
  }
  reverse(rng(ans));
  cout << ans << endl;

  return 0;
}
