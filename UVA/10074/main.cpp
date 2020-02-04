#include <bits/stdc++.h>
using namespace std;

const int N = 1e2+5;

int a[N][N];
int cum[N][N];

int main(){
    int n,m;
    while(scanf("%d %d", &n, &m) == 2 && (n != 0 && m != 0)) {
        for(int i=0 ; i<=n ; ++i)for(int j=0 ; j<=m ; ++j)cum[i][j]=0;
        int MAX = 0;
        for(int i=0 ; i<=n ; ++i)
            for(int j=0 ; j<=m ; ++j){
                if( !i || !j)a[i][j]=0;
                else scanf("%d" , &a[i][j]);
            }
        for(int i=1 ; i<=n ; ++i){
            for(int j=1 ; j<=m ; ++j)
                cum[i][j] = a[i][j] + cum[i-1][j] + cum[i][j-1] - cum[i-1][j-1];
        }

        for(int i=1 ; i<=n ; ++i){
            for(int j=1 ; j<=m ; ++j){
                for(int k=1 ; k<=n ; ++k){
                    for(int l=1 ; l<=m ; ++l){
                        int Max_row = max(i,k);
                        int Min_row = min(i,k);
                        int Max_col = max(j,l);
                        int Min_col = min(j,l);
                        int cal = cum[Max_row][Max_col] - cum[Max_row][Min_col-1] - cum[Min_row-1][Max_col] + cum[Min_row-1][Min_col-1] ;
                        if(!cal){
                            int x = Max_col-Min_col+1;
                            int y = Max_row-Min_row+1;
                            MAX = max (MAX , x*y);
                        }
                    }
                }
            }
        }
        printf("%d\n",MAX);
    }
    return 0;
}
