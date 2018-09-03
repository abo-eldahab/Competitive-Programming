#include <bits/stdc++.h>
using namespace std;

int n,m,x,y;

int main()
{
    scanf("%d %d %d %d",&n,&m,&x,&y);
    int k;
    scanf("%d",&k);
    long long ans = 0;
    while(k--){
        int dx,dy;
        scanf("%d %d",&dx,&dy);
        long long nx=(long long)x+dx , ny=(long long)y+dy;
        if(nx<=(long long)n && nx>0 && ny<=(long long)m && ny>0){
            int no_x,no_y;
            if(dx<0)no_x = (x-1)/abs(dx);
            else if(dx==0)no_x=1e9+5;
            else no_x = (n-x)/abs(dx);
            if(dy<0)no_y = (y-1)/abs(dy);
            else if(dy==0)no_y=1e9+5;
            else no_y = (m-y)/abs(dy);
            int no = min(no_x , no_y);
            ans += no;
            x += no*dx;
            y += no*dy;
        }
    }
    printf("%I64d\n",ans);
    return 0;
}


