#include <bits/stdc++.h>
using namespace std;

bool perfect_square(int x){
    int y = sqrt(x);
    return y*y==x ? true : false ;
}

int main()
{
    int n;
    scanf("%d",&n);
    int ans = -1*1e8 ;
    while(n--){
        int x;
        scanf("%d",&x);
        if(x<0 || !perfect_square(x))ans = max(x,ans);
    }
    printf("%d",ans);
    return 0;
}
