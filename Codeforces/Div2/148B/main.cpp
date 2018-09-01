#include <bits/stdc++.h>
using namespace std;

double vp,vd,t,f,c;

int main()
{
    scanf("%lf %lf %lf %lf %lf",&vp,&vd,&t,&f,&c);
    double pri = vp*t;
    int ans = 0;
    //t=(dist+x)/vd          -----        t=x/vp         x--->next dist
    if(vd>vp){
        while((pri+=(vp*pri)/(vd-vp)) < c){
            ++ans;
            pri += vp*(pri/vd + f);
        }
    }
    printf("%d\n",ans);
    return 0;
}


