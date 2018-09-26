#include <bits/stdc++.h>
using namespace std;

int n,x;
vector<int> v;

int main()
{
    scanf("%d",&n);
    for(int i=0 ; i<n ; ++i){
        scanf("%d",&x);
        int a = lower_bound(v.begin() , v.end() , x)-v.begin();
        if(a == v.size())v.push_back(x);
        else v[a]=x;
    }
    printf("%d\n",v.size());
    return 0;
}
