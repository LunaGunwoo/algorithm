#include <bits/stdc++.h>
using namespace std;

int N, K;
int vis[1'000'001];

bool isSafe(int n) { return n <= N; }

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N >> K;
  K++;

  queue<int> q;
  q.push(0);
  vis[0] = 1;
  while (!q.empty()) {
    int a = q.front();
    q.pop();
    if (vis[a] == K) break;

    for (int na : {a + 1, a + a / 2}) {
      if (!isSafe(na) || vis[na] > 0) continue;
      q.push(na);
      vis[na] = vis[a] + 1;
    }
  }

  cout << ((vis[N] > 0) ? "minigimbob" : "water");
  return 0;
}