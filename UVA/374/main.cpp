#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,p;
    while(scanf("%lld %lld %lld",&n,&m,&p)!=EOF){
        long long res = 1;
        while (m){
            if (m & 1)
                res = (res * n)%p;
            n = (n * n)%p;
            m >>= 1;
        }
        printf("%lld\n",res);
    }
    return 0;
}
