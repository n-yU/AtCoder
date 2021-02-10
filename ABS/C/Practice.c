#include <stdio.h>

int main() {
    int a,b,c;
    char s[100];
    scanf("%d %d %d %s", &a,&b,&c,s);
    printf("%d %s\n", a+b+c,s);
    return 0;
}