#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  int N;
  cin >> N;

  vector<int64_t> L(N + 1);
  L.at(0) = 2;
  L.at(1) = 1;

  rep(i, N - 1) {
    L.at(i + 2) = L.at(i + 1) + L.at(i);
  }

  cout << L.at(N) << endl;
}
