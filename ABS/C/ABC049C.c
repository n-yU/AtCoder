#include <stdio.h>
#include <string.h>

void rv(char *s) {
    int l=strlen(s),i;
    for(i=0; i<l/2; i++) {
        char t = s[i];
        s[i] = s[l-i-1];
        s[l-i-1] = t;
    }
}

char T[4][8] = {"dream", "dreamer", "erase", "eraser"};

int main() {
    int i,l,c=0;
    char S[100001];
    scanf("%s", S);
    rv(S);
    for(i=0; i<4; i++)
        rv(T[i]);
    l = strlen(S);

    while(c<l) {
        int k=-1;
        for(i=0; i<4; i++)
            if(!strncmp(S+c,T[i],strlen(T[i]))) {
                k = strlen(T[i]);
                break;
            }
        if(k<0) {
            puts("NO");
            return 0;
        }
        c += k;
    }
    puts("YES");
    return 0;
}