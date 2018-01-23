#include <bits/stdc++.h>
using namespace std;

int a[100000+5];

int main()
{
    int n,x;
    scanf("%d %d",&n,&x);
    for(int i=0 ; i<n ; ++i)scanf("%d",&a[i]);
    sort(a,a+n);
    long long ans=0;
    for(int i=0 ; i<n ; ++i){
        ans+=1ll*a[i]*x;
        --x;
        if(x==0) x=1;
    }
    printf("%I64d",ans);
    return 0;
}
