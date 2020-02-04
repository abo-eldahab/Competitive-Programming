#include <bits/stdc++.h>

using namespace std;

const int N = 1e2+5;

int a[N][N];
int cum[N][N];

int main(){
    int n;
    scanf("%d",&n);
    int MAX = INT_MIN;
    for(int i=0 ; i<=n ; ++i)
        for(int j=0 ; j<=n ; ++j){
            if( !i || !j)a[i][j]=0;
            else scanf("%d" , &a[i][j]);
            MAX = max(MAX , a[i][j]);
        }
    for(int i=1 ; i<=n ; ++i){
        for(int j=1 ; j<=n ; ++j)
            cum[i][j] = a[i][j] + cum[i-1][j] + cum[i][j-1] - cum[i-1][j-1];
    }
    for(int i=1 ; i<=n ; ++i){
        for(int j=1 ; j<=n ; ++j){
            for(int k=1 ; k<=n ; ++k){
                for(int l=1 ; l<=n ; ++l){
                    int Max_row = max(i,k);
                    int Min_row = min(i,k);
                    int Max_col = max(j,l);
                    int Min_col = min(j,l);
                    int cal = cum[Max_row][Max_col] - cum[Max_row][Min_col-1] - cum[Min_row-1][Max_col] + cum[Min_row-1][Min_col-1] ;
                    MAX = max(cal , MAX);
                }
            }
        }
    }
    printf("%d\n",MAX);
    return 0;
}
