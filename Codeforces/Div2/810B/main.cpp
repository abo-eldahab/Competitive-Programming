#include <bits/stdc++.h>
using namespace std;

int n,f;
int k,l;
long long ans;
vector<pair<int ,pair<int ,int> > >v;


int main()
{
    scanf("%d %d",&n,&f);
    while(n--){
        scanf("%d %d",&k,&l);
        if(k>=l)ans+=l;
        else if(k && l){
            int p = min(2*k , l) - k;
            v.push_back(make_pair(p , make_pair(k,l)));
        }
    }
    sort(v.rbegin() , v.rend());
    int s = v.size();
    for(int i=0 ; i<s ; ++i){
        if(f){ans+=min(2*v[i].second.first , v[i].second.second);--f;}
        else ans+=min(v[i].second.first , v[i].second.second);
    }
    printf("%I64d\n",ans);
    return 0;
}
