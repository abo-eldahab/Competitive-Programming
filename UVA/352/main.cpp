#include <bits/stdc++.h>
using namespace std;

int n;
char s[1000][1000];
bool vis[1000][1000];
int dx[]={0,  0, -1, -1, -1,  1, 1, 1};
int dy[]={1, -1,  0,  1, -1, -1, 1, 0};

bool valid(int i,int j){
    return i>=0 && i<n && j>=0 && j<n ;
}

void dfs(int x ,int y){
    vis[x][y]=1;
    for(int i=0 ; i<8 ; ++i){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(!valid(nx,ny) || vis[nx][ny] || s[nx][ny]!='1')continue;
        dfs(nx,ny);
    }
}


int main()
{
    int t=1;
    while(scanf("%d",&n)==1){
        memset(vis , 0 ,sizeof(vis));
        for(int i=0 ; i<n ; ++i)scanf("%s",s[i]);
        int ans=0;
        for(int i=0 ; i<n ; ++i){
            for(int j=0 ; j<n ; ++j){
                if(!vis[i][j] && s[i][j]=='1'){++ans;dfs(i,j);}
            }
        }
        printf("Image number %d contains %d war eagles.\n",t++,ans);
    }
    return 0;
}
