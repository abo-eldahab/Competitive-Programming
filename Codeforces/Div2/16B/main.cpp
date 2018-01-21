#include <bits/stdc++.h>
using namespace std;

vector<pair<int ,int > >v;

int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0,a,b ; i<m ; ++i){
        scanf("%d%d",&a,&b);
        v.push_back(make_pair(b,a));
    }
    sort(v.rbegin() , v.rend());
    long long ans=0;
    int j=0;
    while(n && j<m){
        if(v[j].second >= n){ans += (1ll*v[j].first * n) ; n=0;}
        else {ans += (1ll * v[j].first * v[j].second) ; n -= v[j].second ; }
        ++j;
    }
    printf("%I64d\n",ans);
    return 0;
}
