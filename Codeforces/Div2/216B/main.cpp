#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int> adj[100+5];
bool vis[100+5];

int sol(int u ,int par){
    vis[u]=1;
    int counter = 0;
    for(int i=0 ; i<adj[u].size() ; ++i){
        int child = adj[u][i];
        if(vis[child] && child!=par)return counter+200;
        else if(!vis[child]) counter+=(1+sol(child,u));
    }
    return counter;
}

int main()
{
    scanf("%d %d",&n,&m);

    memset(vis,0,sizeof(vis));
    for(int i=0 ; i<m ; ++i){
        int u,v;
        scanf("%d %d",&u,&v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int ans=0;
    int c=0;
    for(int i=1 ; i<= n ; ++i){
        if(!vis[i]){
            int x = sol(i,0)+1;
            if(x>200 && (x&1))++ans;
            else if(x<200 && (x&1))++c;
        }
    }
    if(c&1)++ans;
    printf("%d\n",ans);
    return 0;
}
