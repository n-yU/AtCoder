#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,i;
  cin >> N;
  vector<int> H(N);
  for(i=0; i<N; i++)
    cin >> H.at(i);

  for(i=1; i<N; i++)
    if(H.at(i)>H.at(i-1))
      H.at(i)--;
    else if(H.at(i)<H.at(i-1))
      break;

  if(i==N)
    cout << "Yes";
  else
    cout << "No";
  cout << endl;
}
