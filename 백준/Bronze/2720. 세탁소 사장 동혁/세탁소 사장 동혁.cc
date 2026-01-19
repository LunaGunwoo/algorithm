#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int T;
  cin >> T;
  while (T--) {
    int C;
    cin >> C;
    for (int q : {25, 10, 5, 1}) {
      int r = C / q;
      C %= q;
      cout << r << ' ';
    }
    cout << '\n';
  }
  return 0;
}