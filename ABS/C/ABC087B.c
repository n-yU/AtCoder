#include <stdio.h>

int main() {
    int A,B,C,X,i,j,c=0;
    scanf("%d %d %d %d", &A,&B,&C,&X);
    for(i=0; i<=A; i++)
        for(j=0; j<=B; j++) {
            int r = X-i*500-j*100;
            if(!(r%50) && r/50<=C && r/50>=0)
                c++;
        }
    printf("%d\n", c);
}