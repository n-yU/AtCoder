#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<char>> a(H+2, vector<char>(W+2));

  for(int i=0; i<H+2; i++) {
    for(int j=0; j<W+2; j++) {
      if(i==0 || i==H+1 || j==0 || j==W+1)
        a[i][j] = '#';
      else
        cin >> a[i][j];
      cout << a[i][j];
    }
    cout << endl;
  }
}
