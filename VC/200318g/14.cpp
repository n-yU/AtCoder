#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (n); ++i)

vector<string> s = {"ABGGEGBCFEBFBAF",
"FFGFACCCECDGCDGAFFFACGDA",
"EEDCAEAFBDDEEDGGA",
"GDCAGFFAACBGEDBAFBCDECGAE",
"EDB",
"GADGADEDBCGABDDCBBDBEAD",
"GADBB",
"DFCE",
"BFGCGCBEDC",
"EDGADBGGDDFEEGGFDGCAFBFGFAAD",
"DDAEBGACDFDGDAB",
"EEDCECFFAE",
"ADDBEEABFEAB",
"FEEBFDGAADAE",
"GB"};

int main() {
    sort(s.begin(), s.end());
    cout << s.at(6) << endl;
}