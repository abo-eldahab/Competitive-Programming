#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
        (WA) if use --int--
    */
    long long n,m;
    while(scanf("%lld %lld",&n,&m) && (n||m)){
        if(n<m)swap(n,m);
        bool temp = 1;
        while(1){
            if(!(n%m) || 2*m<n){
                printf("%s wins\n",temp?"Stan" : "Ollie");
                break;
            }
            n-=m;
            if(n<m)swap(n,m);
            temp = !temp;
        }
    }
    return 0;
}
