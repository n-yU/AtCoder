#include <stdio.h>
#include <stdlib.h>

int main() {
    int N,t,x,y,i,tt,tx,ty;
    scanf("%d", &N);
    t=0; x=0; y=0;

    for(i=0; i<N; i++) {
        scanf("%d %d %d", &tt,&tx,&ty);
        int l=abs(tx-x)+abs(ty-y);
        if((l-(tt-t))>0 || (tt-t-l)%2)
            break;
        t = tt;
        x = tx;
        y = ty;
    }

    printf((i==N) ? "Yes\n" : "No\n");
}