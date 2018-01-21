#include <bits/stdc++.h>
using namespace std;

int a1[100000+5];
int a2[100000+5];


int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0,x ; i<n ; ++i){
        scanf("%d",&x);
        a1[x]=i+1;
        a2[x]=n-i;
    }
    int m;
    scanf("%d",&m);
    long long vasya=0,petya=0;
    while(m--){
        int x;
        scanf("%d",&x);
        vasya += a1[x];
        petya += a2[x];
    }
    printf("%I64d %I64d\n",vasya , petya);
    return 0;
}
