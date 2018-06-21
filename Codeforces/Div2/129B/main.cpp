#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[105][105];
int deg[105];

int main()
{
    scanf("%d %d",&n,&m);
    while(m--){
        int u,v;
        scanf("%d %d",&u,&v);
        a[u][v] = a[v][u] = 1;
        ++deg[u];
        ++deg[v];
    }
    int ans = 0 ;
    while(1){
        vector<int> v;
        for(int i=1 ; i<=n ; ++i)if(deg[i] == 1)v.push_back(i);
        int siz = v.size();
        if(!siz)break;
        for(int i=0 ; i<siz ; ++i){
            int x = v[i];
            for(int j=1 ; j<=n ; ++j)
                if(a[x][j])--deg[j];
            deg[x]=0;
        }
        ++ans;
    }
    printf("%d",ans);
    return 0;
}
