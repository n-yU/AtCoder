#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
 
  vector<int> A(N);
  int sum=0, ave, i;
  for(i=0; i<N; i++) {
    cin >> A.at(i);
    sum += A.at(i);
  }
  ave = sum / N;
  
  for(i=0; i<N; i++) {
    if(ave > A.at(i))
      cout << ave-A.at(i) << endl;
    else
      cout << A.at(i)-ave << endl;
  }
}