#include <bits/stdc++.h>
using namespace std;

int main() {
    int i;
    double N,t;
    cin >> N;
    t = N / 1.08;

    if(t == (int)t)
        cout << t;
    else {
        i = (int)t+1;
        while(1) {
            if(int(i*1.08) == N) {
                cout << (int)i;
                break;
            }
            if(int(i*1.08) > N) {
                cout << ":(";
                break;
            }
            i++;
        }
    }
    cout << endl;
}