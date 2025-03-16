#include <bits/stdc++.h>
using namespace std;

#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define drep(i, n) for (int i = (n) - 1; i >= 0; --i)
#define srep(i, s, t) for (int i = s; i < t; ++i)
#define rng(a) a.begin(), a.end()
#define rrng(a) a.rbegin(), a.rend()
#define maxs(x, y) (x = max(x, y))
#define mins(x, y) (x = min(x, y))
template <typename T>
using vec = vector<T>;
template <typename T>
using vvec = vec<vec<T>>;
using ll = long long;
using ull = unsigned long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using vi = vec<int>;
using vvi = vvec<int>;
const ll LINF = 1001002003004005006ll;
const int INF = 1001001001;
const int MOD = 1000000007;

int main() {
  int n, m;
  cin >> n >> m;
  vec<string> s(n);
  rep(i, n) cin >> s[i];

  // 1. 現在地は1, 1である。
  // 2. 現在の上下左右を調べて、. の場合、座標と方向を queue に追加する。
  // 3. queue の中身を取り出し、岩にぶつかるまで指定した方向に進み続ける。
  // 4. 岩にぶつかったら 2 に戻る。ただし、探索済みの場合は処理を終了する。
  int d_size = 4;
  vi dx = {0, 1, 0, -1};
  vi dy = {1, 0, -1, 0};
  vvec<bool> visited(n, vec<bool>(m));
  vvec<bool> stopped(n, vec<bool>(m));
  deque<P> q;
  q.push_back({1, 1});
  stopped[1][1] = true;
  while (!q.empty()) {
    P p = q.front();
    q.pop_front();
    rep(i, d_size) {
      int x = p.first;
      int y = p.second;
      while (s[x][y] == '.') {
        visited[x][y] = true;
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (s[nx][ny] == '#') break;
        x = nx;
        y = ny;
      }
      if (stopped[x][y]) continue;
      stopped[x][y] = true;
      q.push_back({x, y});
    }
  }

  int ans = 0;
  rep(i, n) rep(j, m) if (visited[i][j]) ans++;
  cout << ans << endl;
  return 0;
}
