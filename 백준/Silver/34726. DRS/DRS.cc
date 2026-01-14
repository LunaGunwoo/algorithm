#include <bits/stdc++.h>
using namespace std;

#define NAME first
#define DIST second

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  vector<pair<string, int>> cars;
  vector<string> track;
  int N, T;

  cin >> N >> T;
  track.resize(T);
  for (int i = 0; i < N; i++) {
    string D;
    int t;
    cin >> D >> t;
    cars.push_back({D, t});
  }

  track[cars[0].DIST] = cars[0].NAME;
  for (int i = 1; i < cars.size(); i++) {
    cars[i].DIST = (cars[i - 1].DIST + cars[i].DIST) % T;
    track[cars[i].DIST] = cars[i].NAME;
  }

  vector<string> ans;
  int prev_loc = 0;
  for (int i = 1; i < T; i++) {
    if (track[i] == "") continue;
    int gap = i - prev_loc;
    prev_loc = i;
    if (gap <= 1000) ans.push_back(track[i]);
  }
  if (T - prev_loc <= 1000) ans.push_back(track[0]);

  sort(ans.begin(), ans.end());
  if (ans.size() == 0) {
    cout << -1;
    return 0;
  }
  for (string out : ans) {
    cout << out << ' ';
  }
  return 0;
}