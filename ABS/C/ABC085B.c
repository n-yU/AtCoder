#include <stdio.h>

int cp(const void *a, const void *b) {
    return *(int*)b-*(int*)a;
}

int main() {
    int N,i,t,c=1;
    scanf("%d", &N);
    int d[N];

    for(i=0; i<N; i++)
        scanf("%d", d+i);
    qsort(d,N,sizeof(int),cp);
    t = d[0];
    for(i=1; i<N; i++)
        if(t != d[i]) {
            t = d[i];
            c++;
        }
    printf("%d\n", c);
    return 0;
}