#include <bits/stdc++.h>
using namespace std;

int main()
{
    int b,p,m;
    while(scanf("%d %d %d",&b,&p,&m)!=EOF){
        int res = 1;
        b %= m;
        while (p){
            if (p & 1)
                res = (res * b)%m;
            b = (b * b)%m;
            p >>= 1;
        }
        printf("%d\n",res);
    }
    return 0;
}
