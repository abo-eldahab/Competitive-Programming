#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[100000+5], b[100000+5];

int mem[100000+5];
int sol_a(int i){
    if(i>=m)return 0;
    int& ret = mem[i];
    if(~ret)return ret;
    return ret = max(sol_a(i+2)+a[i] , sol_a(i+1));
}

int sol_b(int i){
    if(i>=n)return 0;
    int& ret = mem[i];
    if(~ret)return ret;
    return ret = max(sol_b(i+2)+b[i] , sol_b(i+1));
}


int main()
{
    while(scanf("%d %d",&n,&m) && n){
        for(int i=0 ; i<n ; ++i){
            memset(mem ,-1 , sizeof mem);
            for(int j=0 ; j<m ; ++j)scanf("%d",a+j);
            b[i] = sol_a(0);
        }
        memset(mem , -1 , sizeof mem);
        printf("%d\n",sol_b(0));
    }
    return 0;
}
