#include <bits/stdc++.h>
using namespace std;

bool lucky(int h,int m){
    return (h%10==7 || m%10==7)?true:false ;
}

int main()
{
    int x;
    scanf("%d",&x);
    int h,m;
    scanf("%d %d",&h,&m);
    int ans = 0;
    while(!lucky(h,m)){
        m-=x;
        if(m<0){m+=60 ; --h;}
        if(h<0)h+=24;
        ++ans;
    }
    printf("%d",ans);
    return 0;
}
