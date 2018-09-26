#include <bits/stdc++.h>
using namespace std;

int l,n;
int a[50+5];

int mem[50+5][50+5];
int sol(int i,int j){
    if(j-i == 1)return 0;
    int& ret = mem[i][j];
    if(~ret)return ret;
    ret = 1e8;
    for(int k=i+1  ; k<j ; ++k)
        ret = min(ret , sol(i,k)+sol(k , j)+(a[j]-a[i]));
    return ret;
}

int main()
{
    while(scanf("%d",&l)==1 && l){
        memset(mem , -1 , sizeof mem);
        scanf("%d",&n);
        for(int i=1 ; i<=n ; ++i)scanf("%d",a+i);
        a[n+1] = l;
        printf("The minimum cutting is %d.\n",sol(0 , n+1));
    }
    return 0;
}
