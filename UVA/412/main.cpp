#include <bits/stdc++.h>
using namespace std;

int gcd(int x,int y){
    if(y==0)return x;
    return gcd(y,x%y);
}


int main()
{
    //freopen("test.txt" , "w" , stdout);
    int n;
    while(scanf("%d",&n) && n){
        int a[55];
        for(int i=0 ; i<n ; ++i)scanf("%d",&a[i]);
        int c=0;
        for(int i=0 ; i<n ; ++i){
            for(int j=i+1 ; j<n ; ++j)
                if(gcd(a[i],a[j])==1)++c;
        }
        !c ? puts("No estimate for this data set.") : printf("%.6lf\n" , sqrt(6.0*(n)*(n-1)/2/c));
    }

    return 0;
}
