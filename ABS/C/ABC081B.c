#include <stdio.h>
#include <math.h>

int main() {
    int N,A,i,r=1e9+7,c;
    scanf("%d", &N);
    for(i=0; i<N; i++) {
        c=0;
        scanf("%d", &A);
        for(;A%2==0; A/=2)
            c++;
        r = fmin(r,c);
    }
    printf("%d\n", r);
    return 0;
}