#include <bits/stdc++.h>
using namespace std;

int a[1000000+5];
int n,m,k;



int main()
{

    scanf("%d %d %d",&n,&m,&k);

    a[1]=1;
    for(int i=0,x ; i<m ; ++i){
        scanf("%d",&x);
        a[x]=-1;
    }
    int ans=1;
    bool temp=true;
    while(k--){
        int x,y;
        scanf("%d %d",&x,&y);
        if(a[x]==1 && a[y]==-1 && temp){ans=y;temp=false;}
        else if(a[x]==-1 && a[y]==1 && temp){ans=x;temp=false;}
        else if(a[x]==1 && temp){swap(a[x],a[y]);ans=y;}
        else if(a[y]==1 && temp){swap(a[x],a[y]);ans=x;}
    }
    printf("%d\n",ans);
    return 0;
}
