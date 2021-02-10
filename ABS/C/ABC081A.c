#include <stdio.h>

int main() {
    int i,c=0;
    char s[3];
    scanf("%s", s);
    for(i=0; i<3; i++)
        if(s[i] == '1')
            c++;
    printf("%d", c);
}