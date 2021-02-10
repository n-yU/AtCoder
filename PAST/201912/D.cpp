#include <bits/stdc++.h>
using namespace std;

int main() {
    int N,i,A,p=-1;
    cin >> N;
    vector<bool> c(N,1);

    for(i=0; i<N; i++) {
        cin >> A;
        A--;
        if(c.at(A))
            c.at(A) = 0;
        else
            p = ++A;
    }

    if(p == -1)
        cout << "Correct";
    else {
        for(i=0; i<N; i++)
            if(c.at(i))
                break;
        cout << p << " " << i+1;
    }
    cout << endl;
}