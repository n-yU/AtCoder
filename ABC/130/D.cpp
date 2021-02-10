#include <bits/stdc++.h>
using namespace std;

int main() {
  int N,i,j,y;
  int64_t K,c=0LL,x=0;
  cin >> N >> K;
  vector<int> a(N);
  for(i=0; i<N; i++)
    cin >> a.at(i);

  for(i=0; i<N; i++) {
    if(i!=0) {
      x-=a.at(i-1);
      if(x>=K) {
        c+=N-y;
        continue;
      } else {
        for(j=y+1; j<N; j++) {
          x+=a.at(j);
          if(x>=K) {
            y=j;
            break;
          }
        }
      }
    } else {
  	  for(j=i; j<N; j++) {
        x+=a.at(j);
        if(x>=K) {
          y=j;
          break;
        }
      }
    }

    if(j==N)
      break;
    c+=N-y;
  }

  cout << c << endl;
}
