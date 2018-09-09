#include <bits/stdc++.h>
using namespace std;


bool valid(int n){
    int n1=n;
    int sum1=0;
    while(n1){
        sum1 += n1%10;
        n1 /= 10;
    }
    int sum2=0;
    bool temp = false;
    for(int i=2 ; i*i<=n ; ++i){
        while(n%i==0){
            int x=i;
            while(x){
                sum2 += (x%10);
                x /= 10;
            }
            n /= i;
            temp = true;
        }
    }
    if(n!=1){
        while(n){
            sum2 += (n%10);
            n /= 10;
        }
    }
    return (sum1==sum2 && temp );
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int i;
        for(i=n+1 ; ; ++i)
            if(valid(i))break;
        printf("%d\n",i);
    }
    return 0;
}


