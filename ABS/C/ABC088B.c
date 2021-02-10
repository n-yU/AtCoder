#include <stdio.h>

int cp(const void *a, const void *b) {
    return *(int*)b-*(int*)a;
}

int main() {
    int N,i,s=0;
    int A[101];
    scanf("%d", &N);
    for(i=0; i<N; i++)
        scanf("%d", A+i);
    qsort(A,N,sizeof(int),cp);
    
    for(i=0; i<N; i++)
        if(i%2==0)
            s += A[i];
        else
            s -= A[i];
    printf("%d\n", s);
    return 0;
}