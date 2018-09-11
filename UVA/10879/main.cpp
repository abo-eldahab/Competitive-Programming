#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    scanf("%d",&T);
    for(int t=1 ; t<=T ; ++t){
        int x;
        scanf("%d",&x);
        printf("Case #%d: %d = ",t,x);
        int temp = 1;
        for(int i=2 ; i*i<=x ; ++i){
            if(x%i==0){
                if(temp==1){
                    printf("%d * %d = ",i,x/i);
                    ++temp;
                }
                else{
                    printf("%d * %d\n",i,x/i);
                    break;
                }
            }
        }
    }
    return 0;
}


