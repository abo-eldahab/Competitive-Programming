#include <bits/stdc++.h>
using namespace std;

int a[100000+5];


int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0 ; i<n ; ++i)scanf("%d",&a[i]);
    long long energy = 0;
    long long ans=a[0];
    for(int i=1 ; i<n ; ++i){
        if(a[i] < a[i-1] )energy += (a[i-1]-a[i]);
        else if(a[i] > a[i-1] && energy>=a[i]-a[i-1])energy -= a[i]-a[i-1];
        else {
            ans += (a[i]-a[i-1]-energy);
            energy = 0;
        }
    }
    printf("%I64d\n",ans);
    return 0;
}
