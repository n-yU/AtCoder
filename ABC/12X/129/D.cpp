#include <bits/stdc++.h>
using namespace std;

int main() {
  int H,W,i,j,lx=0,x;
  cin >> H >> W;
  vector<string> S(H);
  vector<vector<int>> L(H, vector<int>(W,0)), R(H, vector<int>(W,0)),
                      D(H, vector<int>(W,0)), U(H, vector<int>(W,0));
  for(i=0; i<H; i++)
    cin >> S.at(i);

  for(i=0; i<H; i++)
    for(j=0; j<W; j++)
      if(S.at(i).at(j) == '.') {
        if(i==0)
          U.at(i).at(j) = 1;
        else
          U.at(i).at(j) = U.at(i-1).at(j)+1;
        if(j==0)
          L.at(i).at(j) = 1;
        else
          L.at(i).at(j) = L.at(i).at(j-1)+1;
      }

  for(i=H-1; i>=0; i--)
    for(j=W-1; j>=0; j--)
      if(S.at(i).at(j) == '.') {
        if(i==H-1)
          D.at(i).at(j) = 1;
        else
          D.at(i).at(j) = D.at(i+1).at(j)+1;
        if(j==W-1)
          R.at(i).at(j) = 1;
        else
          R.at(i).at(j) = R.at(i).at(j+1)+1;
      }

  for(i=0; i<H; i++)
    for(j=0; j<W; j++) {
      x = L.at(i).at(j) + R.at(i).at(j) +
             D.at(i).at(j) + U.at(i).at(j) - 3;
      if(x > lx)
        lx = x;
    }

  cout << lx << endl;
}
