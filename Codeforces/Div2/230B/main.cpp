#include <bits/stdc++.h>
using namespace std;

const int N = 1e6+5;

bool prime[N];

void sieve(){
    fill(prime , prime+N , 1);
    prime[0]=prime[1]=false;
    for(int i=2 ; i*i<=N ; ++i){
        if(prime[i]){
            for(int j=i*2 ; j<=N ; j+=i)prime[j]=false;
        }
    }
}

bool perfect_square(long long x){
    long long y = sqrt(x);
    return y*y==x ? true : false ;
}

int main()
{
    int n;
    scanf("%d",&n);
    sieve();
    while(n--){
        long long x;
        scanf("%I64d",&x);
        if(perfect_square(x)){
            int y = sqrt(x);
            prime[y] ? puts("YES") : puts("NO");
        }
        else puts("NO");
    }
    return 0;
}
