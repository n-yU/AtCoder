#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> b(2, vector<int>(3));
vector<vector<int>> c(3, vector<int>(2));

int calc(string s) {
  int i,j,x=0;
  for(i=0; i<2; i++)
    for(j=0; j<3; j++)
      if(s[i*3+j]!='2' && s[i*3+j]==s[(i+1)*3+j])
        x += b.at(i).at(j);
  for(i=0; i<3; i++)
    for(j=0; j<2; j++)
      if(s[i*3+j]!='2' && s[i*3+j]==s[i*3+j+1])
        x += c.at(i).at(j);
  return x;
}

int game(int t, string s) {
  int i,j,x;
  if(t == 9)
    return calc(s);
  if(t%2==0) {
    x = -10;
    for(i=0; i<3; i++)
      for(j=0; j<3; j++)
        if(s[i*3+j] == '2') {
          s[i*3+j] = '0';
          x = max(x, game(t+1, s));
          s[i*3+j] = '2';
        }
  } else {
    x = 1210;
    for(i=0; i<3; i++)
      for(j=0; j<3; j++)
        if(s[i*3+j] == '2') {
          s[i*3+j] = '1';
          x = min(x, game(t+1, s));
          s[i*3+j] = '2';
        }
  }
  return x;
}

int main() {
  int i,j,x,s=0;
  for(i=0; i<2; i++)
    for(j=0; j<3; j++) {
      cin >> b.at(i).at(j);
      s += b.at(i).at(j);
    }
  for(i=0; i<3; i++)
    for(j=0; j<2; j++) {
      cin >> c.at(i).at(j);
      s += c.at(i).at(j);
    }
  x = game(0, "222222222");
  cout << x << endl << s-x << endl;
}
