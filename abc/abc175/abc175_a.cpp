#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, t) for (int i = s; i < t; ++i)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;
  int ans = 0;
  if (S.find("RRR") != string::npos) {
    ans = 3;
  } else if (S.find("RR") != string::npos) {
    ans = 2;
  } else if (S.find("R") != string::npos) {
    ans = 1;
  }

  cout << ans << endl;

  return 0;
}
