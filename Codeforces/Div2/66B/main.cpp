#include <bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    scanf("%d",&n);
    int a[1000+5];
    for(int i=0 ; i<n ; ++i)scanf("%d",&a[i]);
    int max1=-1;

    //n^2
    for(int i=0 ; i<n ; ++i){
        int left=0;
        int right=0;
        for(int j=i+1 ; j<n ; ++j)if(a[j-1]>=a[j])++right;else break;
        for(int k=i-1 ; k>=0 ; --k)if(a[k+1]>=a[k])++left;else break;
        max1 = max(max1 , left+right+1);
    }
    printf("%d\n",max1);
    return 0;
}
