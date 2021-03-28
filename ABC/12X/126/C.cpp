#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,K,i,j;
  double p=0;
  cin >> N >> K;
  for(i=0; i<min(N,K); i++) {
    int x=0;
    for(j=i+1; j<K; j*=2)
      x++;
    p += ((double)1/pow(2,x));
  }
  p /= N;
  cout << setprecision(12);
  if(N<K)
    cout << p;
  else
    cout << p+(N-K)*((double)1/N);
  cout << endl;
}
