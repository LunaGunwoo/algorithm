#include <bits/stdc++.h>
using namespace std;

int N, V[3];
bool vis[201][201][201];
queue<tuple<int, int, int>> q;

void makeNext(int& a, int& b, int& c) {
  if (vis[a][b][c]) return;
  vis[a][b][c] = true;
  q.push({a, b, c});
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  for (int i = 0; i < 3; i++) cin >> V[i];
  N = V[2];

  q.push({0, 0, N});
  vis[0][0][N] = true;
  while (!q.empty()) {
    auto [a, b, c] = q.front();
    q.pop();

    int L[3] = {a, b, c};
    int space_L[3];
    for (int i = 0; i < 3; i++) space_L[i] = V[i] - L[i];

    for (int i = 0; i < 3; i++) {
      if (L[i] == 0) continue;
      for (int j = 0; j < 3; j++) {
        if (i == j) continue;
        int next_L[3];

        int left = 3 - (i + j);
        if (L[i] < space_L[j]) {
          next_L[i] = 0;
          next_L[j] = L[j] + L[i];
          next_L[left] = L[left];
        } else {
          next_L[i] = L[i] - space_L[j];
          next_L[j] = L[j] + space_L[j];
          next_L[left] = L[left];
        }
        makeNext(next_L[0], next_L[1], next_L[2]);
      }
    }
  }

  for (int i = 0; i <= V[2]; i++) {
    if (vis[0][N - i][i]) cout << i << ' ';
  }
  return 0;
}