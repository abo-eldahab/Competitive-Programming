#include <bits/stdc++.h>
using namespace std;

int n,k;
int a[10000+5];
int mem[10000+5][100+5];

int sol(int i,int mod){
    if(i == n){
        if(!mod)return 1;
        return 0;
    }
    int &ret = mem[i][mod];
    if(ret != -1)return ret;
    ret = 0;
    ret |= (sol(i+1,((mod+a[i])%k+k)%k) | sol(i+1,((mod-a[i])%k+k)%k));
    return ret;
}


int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        memset(mem , -1 , sizeof(mem));
        scanf("%d %d",&n,&k);
        for(int i=0 ; i<n ; ++i)scanf("%d",&a[i]);
        if(sol(1,(a[0]+k)%k))puts("Divisible");
        else puts("Not divisible");
    }
    return 0;
}
