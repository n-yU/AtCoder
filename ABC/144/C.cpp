#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int main() {
    ll i,N,x;
    cin >> N;
    x = N;

    for(i=1; i*i<=N; i++)
        if(N%i == 0)
            x = min(x, i+N/i);
  
  	if(x == N)
      x = N+1;

    cout << x-2 << endl;
}