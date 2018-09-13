#include <bits/stdc++.h>
using namespace std;

vector<int>prime;
bool temp[100+5];
int n;
void sieve(){
    memset(temp , true , sizeof(temp));
    for(int i=2 ; i<=100 ; ++i){
        for(int j=i*i ; j<=100 ; j+=i)temp[j]=false;
    }
    for(int i=2 ; i<=100 ; ++i)if(temp[i])prime.push_back(i);
}

int count_pow(int p){
    int c = 0;
    for(int i=p ; i<=n ; i*=p)
        c += (n/i);
    return c;
}

void sol(){
    printf("%3d! =",n);
    int siz = prime.size();
    for(int i=0 ; i<siz && prime[i] <= n ; ++i)
    {
        if(i%15==0 && i)printf("\n      ");
        printf("%3d",count_pow(prime[i]));
    }
    puts("");
}

int main()
{
    sieve();
    while(scanf("%d",&n)==1 && n)sol();
    return 0;
}
