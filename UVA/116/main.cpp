#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 9, M = 1e7, OO = 0x7f7f7f7f;
int mem[15][105][15];
int adj[15][105];
int dx[]={-1,0,1};
int ddx[]={0,1,-1};
int dddx[]={1,-1,0};

int n,m;


int sol(int i,int j,int l){
    if(j==m) return 0;
    int &ret=mem[i][j][l];
    if(ret!=OO) return ret;
    int ans = OO;
    ret = OO;
    if(i==n-1){
        for(int k=0;k<3;++k){
            int tox = i+dddx[k];
            if(tox < 0) tox = n-1;
            else if(tox == n) tox = 0;
            ret = min(ret , sol(tox,j+1,l)+adj[i][j]);
        }
    }
    else if(i){
        for(int k=0;k<3;++k){
            int tox = i+dx[k];
            if(tox < 0) tox = n-1;
            else if(tox == n) tox = 0;
            ret = min(ret , sol(tox,j+1,l)+adj[i][j]);
        }
    }else {
        for(int k=0;k<3;++k){
            int tox = i+ddx[k];
            if(tox < 0) tox = n-1;
            else if(tox == n) tox = 0;
            ret = min(ret ,sol(tox,j+1,l)+adj[i][j]);
        }
    }
    return ret;
}

void print(int i,int j,int l){
   // printf("%d ",i+1);
    if(j==m-1) {
        printf("%d",i+1);
        return;
    }
    if(i==n-1){
        for(int k=0;k<3;++k){
            int tox = i+dddx[k];
            if(tox < 0) tox = n-1;
            else if(tox == n) tox = 0;
            if(mem[i][j][l] == sol(tox,j+1,l)+adj[i][j]){
                printf("%d ",i+1);
                print(tox , j+1 , l);
                return;
            }
        }
    }
    else if(i){
        for(int k=0;k<3;++k){
            int tox = i+dx[k];
            if(tox < 0) tox = n-1;
            else if(tox == n) tox = 0;
            if(mem[i][j][l] == sol(tox,j+1,l)+adj[i][j]){
                printf("%d ",i+1);
                print(tox , j+1 , l);
                return;
            }
        }
    }else {
        for(int k=0;k<3;++k){
            int tox = i+ddx[k];
            if(tox < 0) tox = n-1;
            else if(tox == n) tox = 0;
            if(mem[i][j][l] == sol(tox,j+1,l)+adj[i][j]){
                printf("%d ",i+1);
                print(tox , j+1 , l);
                return;
            }
        }
    }
    return ;
}

int main() {
//    freopen("out.txt" , "w" , stdout);
//    freopen("in.txt" , "r" , stdin);
	while(scanf("%d %d",&n,&m)==2){
        memset(mem , OO , sizeof(mem));
        for(int i=0 ; i<n ; ++i)for(int j=0 ; j<m ; ++j)scanf("%d",&adj[i][j]);
        int min1 = OO;
        int row =-1;
        for(int i=0 ; i<n ; ++i){
            int ans = sol(i , 0 , i);
            if(ans < min1){
                min1 = ans;
                row = i;
            }
        }
        print(row , 0 , row);
        printf("\n%d\n",min1);
	}
	return 0;
}

