#include <bits/stdc++.h>
using namespace std;

int a[20];
int x;

bool valid(int y){
    for(int i=0 ; i<y ; ++i)if(a[y] == a[i])return false;
    return true;
}


bool is_prime(int y , int z){
    int sum = a[y]+a[z];
    int q = sqrt(sum);
    for(int i=2 ; i<=q ; ++i)if(sum%i==0)return false;
    return true;
}

void sol(int y){
    if(y == x){
        for(int i=0 ; i<x ; ++i)printf(i==x-1 ? "%d" : "%d ",a[i]);
        puts("");
    }
    else if(y%2){
        for(int i=2 ; i<=x ; i+=2){
            a[y] = i;
            if((y == x-1 ? !is_prime(y , y-1) || !is_prime(y , 0) : !is_prime(y , y-1))|| !valid(y))continue;
            sol(y+1);
        }
    }
    else {
        for(int i=3 ; i<=x ; i+=2){
            a[y] = i;
            if( (y == x-1 ? !is_prime(y , y-1) || !is_prime(y , 0) : !is_prime(y , y-1)) || !valid(y))continue;
            sol(y+1);
        }
    }
}

int main()
{
    for(int n=1 ; ; ++n){
        memset(a , 0 , sizeof(a));
        a[0] = 1;
        if(scanf("%d",&x) == -1)return 0;
        if(n!=1)puts("");
        printf("Case %d:\n",n);
        sol(1);
    }

    return 0;
}
