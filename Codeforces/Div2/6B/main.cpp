#include <bits/stdc++.h>
using namespace std;

char s[100+5][100+5];
int n,m;
char ch;


int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int a[26];


bool valid(int x,int y){
    return x>=0 && x<n && y>=0 && y<m && s[x][y]!='.' && s[x][y]!=ch;
}

int main()
{

    scanf("%d %d %c",&n,&m,&ch);
    for(int i=0 ; i<n ; ++i)scanf("%s",s[i]);
    for(int i=0 ; i<n ; ++i){
        for(int j=0 ; j<m ; ++j){
            if(s[i][j]==ch){
                for(int k=0 ; k<4 ; ++k){
                    int nx = i+dx[k];
                    int ny = j+dy[k];
                    if(valid(nx,ny))
                        a[s[nx][ny]-'A']=1;
                }
            }
        }
    }
    int ans=0;
    for(int i=0 ; i<26 ; ++i)if(a[i])++ans;
    printf("%d",ans);
    return 0;
}
