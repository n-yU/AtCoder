#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  if(S == "Sunny")
    S = "Cloudy";
  else if(S == "Cloudy")
    S = "Rainy";
  else
    S = "Sunny";
  cout << S << endl;
}
