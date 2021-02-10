#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,Z,W,i,r;
  cin >> N >> Z >> W;
  vector<int> a(N);
  for(i=0; i<N; i++)
    cin >> a.at(i);
  if(N==1)
    r = abs(a.at(0)-W);
  else
    r = max(abs(a.at(N-1)-W), abs(a.at(N-2)-a.at(N-1)));
  cout << r << endl;
}
