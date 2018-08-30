#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int> adj[100+5];
bool vis[100+5];

int gl=0;

void sol(int u ,int par){
    ++gl;
    vis[u]=1;
    for(int i=0 ; i<adj[u].size() ; ++i){
        int child = adj[u][i];
        if(vis[child] && child!=par)gl+=200;
        else if(!vis[child]) sol(child,u);
    }
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
            gl=0;
            sol(i,0);
            if(gl>200 && (gl&1))++ans;
            else if(gl<200 && (gl&1))++c;
        }
    }
    if(c&1)++ans;
    printf("%d\n",ans);
    return 0;
}
