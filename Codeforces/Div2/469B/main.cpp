#include <bits/stdc++.h>
using namespace std;

int  p,q,l,r;
vector<pair<int , int> > v1,v2;

int main()
{
    scanf("%d %d %d %d",&p,&q,&l,&r);
    for(int i=0,a,b ; i<p ; ++i){
        scanf("%d %d",&a,&b);
        v1.push_back(make_pair(a,b));
    }
    for(int i=0,a,b ; i<q ; ++i){
        scanf("%d %d",&a,&b);
        v2.push_back(make_pair(a,b));
    }
    int ans = 0;
    for(int i=l ; i<=r ; ++i){
            bool temp = true;
        for(int j=0 ; j<p && temp ; ++j){
            for(int k=0 ; k<q && temp ; ++k){
               if(v1[j].second >= v2[k].first+i && v1[j].first <= v2[k].second+i){
                 ++ans;
                 temp = false;
               }
            }
        }
    }
    printf("%d",ans);
    return 0;
}
