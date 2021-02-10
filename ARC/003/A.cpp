#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,r=0,i,j,l;
  cin >> N;
  vector<int> x(N), y(N);
  for(i=0; i<N; i++)
    cin >> x.at(i) >> y.at(i);

  for(i=0; i<N; i++)
    for(j=0; j<N; j++) {
      l=pow((x.at(i)-x.at(j)),2)+pow((y.at(i)-y.at(j)),2);
      if(l>r)
        r=l;
    }

  cout << sqrt(r) << endl;
}
