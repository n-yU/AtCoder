#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  int l;
  set<string> s5;
  s5.insert("dream");
  s5.insert("erase");
  cin >> S;

  l = S.size();
  while(1) {
    if(l-5>=0 && s5.count(S.substr(l-5,5)))
      l -= 5;
    else
      if(l-6>=0 && S.substr(l-6,6)=="eraser")
        l -= 6;
      else
        if(l-7>=0 && S.substr(l-7,7)=="dreamer")
          l -= 7;
        else {
          cout << "NO";
          break;
        }

    if(l==0) {
      cout << "YES";
      break;
    }
  }
  cout << endl;
}
