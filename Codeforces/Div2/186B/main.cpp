#include <bits/stdc++.h>
using namespace std;

vector<pair<double , int> >v;
int main()
{
    int n,t1,t2,k;
    scanf("%d %d %d %d",&n,&t1,&t2,&k);
    for(int i=1 ; i<=n ; ++i){
        int a,b;
        scanf("%d %d",&a,&b);
        v.push_back(make_pair(-1.0*max((a*t1)*(1.0-(double)k/100.0) + b*t2 ,(b*t1)*(1.0-(double)k/100.0) + a*t2),i));
    }
    sort(v.begin(),v.end());
    for(int i=0 ; i<n ; ++i)
        printf("%d %.2lf\n",v[i].second,-1*v[i].first);
    return 0;
}


