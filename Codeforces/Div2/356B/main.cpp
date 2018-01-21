#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    scanf("%d%d",&n,&a);
    int arr[100+5];
    for(int i=0 ; i<n ; ++i)scanf("%d",&arr[i]);
    --a;
    int min1=min(n-1-a , a);
    int c;
    arr[a] ? c = 1 : c = 0 ;
    for(int i=0 ; i<min1 ; ++i)if(arr[a-i-1]&&arr[a+i+1])c+=2;
    if(n-1-a < a){for(int i=0 ; i<a-(n-1-a) ; ++i)if(arr[i])++c;}
    else if(n-1-a > a){for(int i=n-1 ; i>2*a ; --i)if(arr[i])++c;}
    printf("%d",c);
    return 0;
}
