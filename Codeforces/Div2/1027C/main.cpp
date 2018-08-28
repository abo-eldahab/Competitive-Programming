#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        map<int ,int> m;
        for(int i=0 ; i<n ; ++i){
            int x;
            scanf("%d",&x);
            ++m[x];
        }

        map<int ,int>::iterator it=m.begin();
        int c=0;
        int x,y;
        int ans1,ans2;
        double min1=1e9+5;
        bool temp = 1;
        while(it!=m.end()){
            if(it->second >= 4 & temp){
                printf("%d %d %d %d\n",it->first,it->first,it->first,it->first);
                temp = 0;
            }
            else if(it->second >= 2 && temp){
                ++c;
                if(c==1)x=it->first;
                else if(c==2){
                    y=it->first;
                    double p = 4.0 * (x+y) * (x+y);
                    double s = (double)x*y;
                    double div = p/s;
                    if(div < min1){
                        min1=div;
                        ans1 = x;
                        ans2 = y;
                    }
                    x=y;
                    c=1;
                }
            }
            ++it;
        }
        if(temp)
        printf("%d %d %d %d\n",ans1,ans1,ans2,ans2);
    }
    return 0;
}
