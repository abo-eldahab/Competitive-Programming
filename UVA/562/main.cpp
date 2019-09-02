#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[100+5];
int mem[100+5][50000+5];

int sol(int i=0, int d=0){
    if(i==m)return d;
    int&ret = mem[i][d];
    if(~ret)return ret;
    ret = min(sol(i+1 ,abs(d-a[i]) ) , sol(i+1 , d+a[i]));
    return ret;
}

int main(){
//    freopen("input.txt" , "r" , stdin);
//    freopen("output.txt" , "w" , stdout);
    scanf("%d",&n);
    while(n--){
        for(int i=0 ; i<100+5 ; ++i){
            for(int j=0 ; j<5000+5 ; ++j)mem[i][j]=-1;
        }
        scanf("%d",&m);
        for(int i=0 ; i<m ; ++i)scanf("%d",a+i);
        printf("%d\n",sol());
    }
    return 0;
}
