#include <bits/stdc++.h>
using namespace std;

char str[1000000+5];

int main()
{
    scanf("%s",str);
    int len=strlen(str);
    int open = 0;
    int ans = 0;
    for(int i=0 ; i<len ; ++i){
        if(str[i]=='(')++open;
        else if(open){
            --open;
            ans+=2;
        }
    }
    printf("%d\n",ans);
    return 0;
}
