#include <bits/stdc++.h>
using namespace std;

long long n;
vector<pair<long long , long long > >adj;
map<long long , bool>M;
long long s;

long long bfs(long long u ,long long c){
    long long counter=1;
    M[u]=1;
    if(c!=0){
        queue<pair<long long , long long> >Q;
        for(long long i=0 ; i<s ; ++i){
            long long ff=adj[i].first;
            long long ss=adj[i].second;
            if(ff==u){
                Q.push({ss , 1});
                M[ss]=1;
            }
            else if(ss==u){
                Q.push({ff , 1});
                M[ff]=1;
            }
        }
        while(!Q.empty()){
            long long cur=Q.front().first;
            long long level=Q.front().second;
            Q.pop();
            if(level<=c)++counter;
            else break;
            for(long long i=0 ; i<s ; ++i){
                long long ff=adj[i].first;
                long long ss=adj[i].second;
                if(ff==cur && !M[ss]){
                    Q.push({ss , level+1});
                    M[ff]=1;
                    M[ss]=1;
                }
                else if(ss==cur && !M[ff]){
                    Q.push({ff , level+1});
                    M[ss]=1;
                    M[ff]=1;
                }
            }
        }
        return counter;
    }
    return counter;
}
int  main()
{
    //freopen("o.txt" , "w" , stdout);
    long long t=1;
    while(scanf("%I64d",&n) , n){
        adj.clear();
        set<long long>S;
        for(long long q=0,u,v ; q<n ; ++q){
            scanf("%I64d%I64d",&u,&v);
            if(u!=v)
                adj.push_back({u,v});
            S.insert(u);
            S.insert(v);
            M[u]=0;
            M[v]=0;
        }
        long long SS=S.size();
        s=adj.size();
        long long st,ed;
        while(scanf("%I64d%I64d",&st,&ed)){
            if(st==0 && ed==0)break;
            M.clear();
            bool temp=false;
            set<long long>::iterator it=S.begin();
            while(it!=S.end()){if(*it==st)temp=1;++it;}
            if(temp) printf("Case %I64d: %I64d nodes not reachable from node %I64d with TTL = %I64d.\n", t , SS-bfs(st,ed) , st , ed);
            else printf("Case %I64d: %I64d nodes not reachable from node %I64d with TTL = %I64d.\n", t , SS , st , ed);
            ++t;
        }

    }
    return 0;
}
