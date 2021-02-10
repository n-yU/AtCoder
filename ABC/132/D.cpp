#include <bits/stdc++.h>
using namespace std;

const int64_t mod=1e9+7;

int64_t modinv(int64_t x, int64_t m) {
  int64_t y=m, u=1, v=0;
  while(y) {
    int64_t t=x/y;
    x -= t*y;
    swap(x,y);
    u -= t*v;
    swap(u,v);
  }
  u %= m;
  if(u<0)
    u+=m;
  return u;
}

int64_t cm(int n, int k) {
  int i;
  int64_t r=1,x=1,y=1;
  if(n<k)
    return 0;
  else if(n==k)
    return 1;
  else if(k==1)
    return n;
  if(k>n-k)
    k=n-k;
  for(i=0; i<k; i++) {
    x*=n-i;
    y*=k-i;
    x%=mod;
    y%=mod;
  }
  return x*modinv(y,mod)%mod;
}

int main() {
  int N,K,i;
  cin >> N >> K;
  for(i=0; i<K; i++)
    cout << (cm(N-K+1, i+1)*cm(K-1, i))%mod << endl;
}
