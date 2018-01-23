#include <bits/stdc++.h>
using namespace std;


int main()
{
    int w,h;
    scanf("%d%d",&w,&h);
    long long ans=0;
    for(int i=2 ; i<=w ; i+=2)
        for(int j=2 ; j<=h ; j+=2)ans += 1ll*(h-j+1)*(w-i+1);
    printf("%I64d\n",ans);
    return 0;
}
