#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  cin.ignore();
  for (int i = 0; i < n; i++) {
    bool alphabet[26];
    string sen;
    fill(alphabet, alphabet + 26, false);

    getline(cin, sen);
    for (int j = 0; j < sen.size(); j++) {
      if (isalpha(sen[j])) alphabet[tolower(sen[j]) - 'a'] = true;
    }

    bool flag = true;
    string miss = "";
    for (int i = 0; i < 26; i++) {
      if (alphabet[i]) continue;
      flag = false;
      miss += i + 'a';
    }
    if (flag)
      cout << "pangram\n";
    else {
      cout << "missing " << miss << '\n';
    }
  }
  return 0;
}