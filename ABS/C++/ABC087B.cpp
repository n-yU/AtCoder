#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, X, i, j, k, c=0;
  cin >> A >> B >> C >> X;

  for(i=0; i<=X/500; i++)
    	for(j=0; j<=(X-500*i)/100; j++) {
    		k = X - 500*i - 100*j;
    		if(k%50==0 && C>=k/50 && A>=i && B>=j)
    			c++;
    	}

  cout << c << endl;
}
