#include <bits/stdc++.h>
using namespace std;

int main() {
  int H,W,A,B,i,j;
  cin >> H >> W >> A >> B;
  vector<vector<char>> s(H, vector<char>(W, '0'));

  for(i=0; i<H; i++)
    for(j=0; j<W; j++)
      if((i<B && j>=A) || (i>=B && j<A))
        s.at(i).at(j) = '1';
  for(i=0; i<H; i++) {
    for(j=0; j<W; j++)
      cout << s.at(i).at(j);
    cout << endl;
  }
}
