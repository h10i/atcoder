#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; ++i)
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;

  vector<string> S(H);
  rep(i, H) cin >> S[i];

  vector<vector<int>> L(H + 2, vector<int>(W + 2, 0));
  vector<vector<int>> R(H + 2, vector<int>(W + 2, 0));
  vector<vector<int>> U(H + 2, vector<int>(W + 2, 0));
  vector<vector<int>> D(H + 2, vector<int>(W + 2, 0));

  rep(h, H) rep(w, W) {
    if (S[h][w] == '.') {
      L[h + 1][w + 1] = L[h + 1][w] + 1;
    }
    int i = W - w - 1;
    if (S[h][i] == '.') {
      R[h + 1][i + 1] = R[h + 1][i + 2] + 1;
    }
  }

  rep(w, W) rep(h, H) {
    if (S[h][w] == '.') {
      U[h + 1][w + 1] = U[h][w + 1] + 1;
    }
    int i = H - h - 1;
    if (S[i][w] == '.') {
      D[i + 1][w + 1] = D[i + 2][w + 1] + 1;
    }
  }

  int ans = 0;
  rep(h, H) rep(w, W) {
    int n = L[h + 1][w + 1] + R[h + 1][w + 1] + U[h + 1][w + 1] +
            D[h + 1][w + 1] - 3;
    if (n > ans) {
      ans = n;
    }
  }

  cout << ans << endl;
}
