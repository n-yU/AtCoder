#include <bits/stdc++.h>
using namespace std;

int main() {
    int X,i;
    cin >> X;
	
  	if(X == 2) {
      	cout << X << endl;
  		return 0;
    }
    while(1) {
        for(i=2; i<X/2; i++)
            if(X%i == 0)
                break;
        if(i == X/2)
            break;
        X++;
    }

    cout << X << endl;
}