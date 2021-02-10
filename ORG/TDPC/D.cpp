#include <bits/stdc++.h>
using namespace std;
using ll=long long;

double dp[100][100][50][50];

int main() {
  int N, d2=0, d3=0, d5=0, i, j, k, l, m;
  ll D;
  cin >> N >> D;

  while(D%2==0) {
    D/=2;
    d2++;
  }
  while(D%3==0) {
    D/=3;
    d3++;
  }
  while(D%5==0) {
    D/=5;
    d5++;
  }

  if(D!=1) {
    cout << 0 << endl;
    return 0;
  }
  dp[0][0][0][0] = 1;

  int t2[6] = {0, 1, 0, 2, 0, 1};
  int t3[6] = {0, 0, 1, 0, 0, 1};
  int t5[6] = {0, 0, 0, 0, 1, 0};

  for(i=0; i<N; i++)
    for(j=0; j<=d2; j++)
      for(k=0; k<=d3; k++)
        for(l=0; l<=d5; l++)
          for(m=1; m<=6; m++) {
            int c2 = min(d2, j+t2[m-1]);
            int c3 = min(d3, k+t3[m-1]);
            int c5 = min(d5, l+t5[m-1]);
            dp[i+1][c2][c3][c5] += dp[i][j][k][l]/6.0;
          }

  cout << fixed << setprecision(7);
  cout << dp[N][d2][d3][d5] << endl;
}
