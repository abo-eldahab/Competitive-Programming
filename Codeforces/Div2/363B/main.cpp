#include <bits/stdc++.h>
using namespace std;

int a[150000+5];


int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=0 ; i<n ; ++i)scanf("%d",&a[i]);
    int ans=1;
    int min1=0;
    for(int i=0 ; i<k ; ++i)min1+=a[i];
    int sum1=min1;
    for(int i=k,j=0 ; i<n ; ++i,++j){
        int sum=sum1;
        sum+=a[i];
        sum-=a[j];
        if(sum<min1){min1=sum;ans=j+2;}
        sum1=sum;
    }
    printf("%d\n",ans);
    return 0;
}
