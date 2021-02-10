#include <stdio.h>

int main() {
    int N,A,B,i,r=0;
    scanf("%d %d %d", &N,&A,&B);
    for(i=1; i<=N; i++) {
        int s=0, t=i;
        for(; t; t/=10)
            s += t%10;
        if(s>=A && s<=B)
            r += i;
    }
    printf("%d\n", r);
}