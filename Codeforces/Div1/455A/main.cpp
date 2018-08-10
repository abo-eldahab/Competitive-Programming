#include <bits/stdc++.h>
using namespace std;

int n;
int a[100000+5];
long long mem[100000+5];
int maxx=-1;


long long sol(int i){
    if(i > maxx)return 0;

    long long &ret = mem[i];
    if(ret != -1)return ret ;

    //long long ret;

    long long choies1 = sol(i+1);
    for(int j=i ; j<=maxx ; ++j){
        long long choies2 = sol(j+2) + ((long long)a[i]*i);
        return ret = max(choies1 , choies2);
    }
}


int main()
{

    scanf("%d",&n);
    memset(mem,-1,sizeof(mem));
    for(int i=0 , x ; i<n ; ++i){
        scanf("%d" ,&x);
        maxx = max(maxx , x);
        ++a[x];
    }
    printf("%lld",sol(1));
    return 0;
}
