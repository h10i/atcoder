#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define srep(i, s, t) for (int i = s; i < t; ++i)
using namespace std;
using ll = long long;
using vi = vector<int>;

int main() {
  int D, T, S;
  cin >> D >> T >> S;
  cout << (S * T >= D ? "Yes" : "No") << endl;
  return 0;
}
