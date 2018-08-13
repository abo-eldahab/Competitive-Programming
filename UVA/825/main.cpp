#include <bits/stdc++.h>
using namespace std;


int t;
int w,n;
long long blocked[1000][1000];

long long sol(int i,int j){
    if(i>w || j>n || blocked[i][j] == -1 )return 0;
    if(i==w && j==n)return 1;
    long long &ret = blocked[i][j];
    if(ret != 0)return ret;
    ret += sol(i+1,j) ;
    ret += sol(i,j+1) ;
    return ret;
}


int main()
{
    scanf("%d",&t);
    while(t--){
        memset(blocked , 0 , sizeof(blocked));
        scanf("%d %d",&w,&n);
        string str;
        cin.ignore();
       for(int i=1;i<=w;i++){
            getline(cin,str);
            stringstream ss(str);
            int x,y;
            ss>>x;
            while(ss>>y){
               blocked[x][y] = -1;
             }
        }
        printf("%lld\n",sol(1,1));
        if(t)puts("");
    }
    return 0;
}
