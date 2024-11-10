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

void init(map<int, vi>& mp, int wall) {
  // 座標の昇順にソートして壁座標を追加する。
  for (auto& p : mp) {
    sort(rng(p.second));
    p.second.push_back(wall);
  }
}

int move(map<int, vi>& mp, int i, int j, int l, int wall) {
  auto it = mp.find(i);
  // 移動途中に壁がない場合
  if (it == mp.end()) return min(j + l, wall - 1);
  // 移動途中に壁がある場合
  auto& is = it->second;
  int wj = *lower_bound(rng(is), j);
  return min(j + l, wj - 1);
}

int main() {
  int h, w, rs, cs;
  cin >> h >> w >> rs >> cs;
  int n;
  cin >> n;
  // 壁の座標
  // mpL, mpR: {i番目の行番号: 列番号}
  // mpU, mpD: {j番目の列番号: 行番号}
  map<int, vi> mpL, mpR, mpU, mpD;
  rep(i, n) {
    int ri, ci;
    cin >> ri >> ci;
    // L, Uは反転してR, Dと同じように処理する。
    mpL[ri].push_back(-ci);
    mpR[ri].push_back(ci);
    mpU[ci].push_back(-ri);
    mpD[ci].push_back(ri);
  }

  init(mpL, 0);
  init(mpR, w + 1);
  init(mpU, 0);
  init(mpD, h + 1);

  int q;
  cin >> q;
  rep(i, q) {
    char d;
    int l;
    cin >> d >> l;
    if (d == 'L') cs = -move(mpL, rs, -cs, l, 0);
    if (d == 'R') cs = move(mpR, rs, cs, l, w + 1);
    if (d == 'U') rs = -move(mpU, cs, -rs, l, 0);
    if (d == 'D') rs = move(mpD, cs, rs, l, h + 1);
    printf("%d %d\n", rs, cs);
  }

  return 0;
}
