#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100000+5];
    scanf("%s",s);
    int l=strlen(s);
    printf("%s",s);
    for(int i=l-1 ; i>=0 ; --i)printf("%c",s[i]);

    return 0;
}
