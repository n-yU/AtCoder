#include <bits/stdc++.h>
using namespace std;
using ll=long long;

int main() {
  int N,i;
  ll s=0;
  cin >> N;
  for(i=1; i<N; i++)
    s += i;
  cout << s << endl;
}
