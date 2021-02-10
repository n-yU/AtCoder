#include <stdio.h>

int main() {
    int N,Y,i,j,a=-1,b=-1,c=-1;
    scanf("%d %d", &N,&Y);

    for(i=0; i<=N; i++)
        for(j=0; j<=N-i; j++) {
            if(10000*i+5000*j+1000*(N-i-j) == Y) {
                a=i; b=j; c=N-i-j;
                break;
            }
        }
    
    printf("%d %d %d", a,b,c);
    return 0;
}