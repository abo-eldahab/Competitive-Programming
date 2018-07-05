#include <bits/stdc++.h>
using namespace std;

int a[10];
int b[10];
int min_ans;

bool valid(int i){
    bool temp = true;
    for(int j = i-1 ; j >= 1 ; --j)if(abs(i-j) == abs(b[i]-b[j]) || b[j] == b[i])temp = false;
    return temp;
}

void sol(int x){
    if(x == 9){
        int counter = 0;
        for(int i=1 ; i<=8 ; ++i) if(a[i] != b[i]) ++counter;
        min_ans = min(min_ans , counter);
    }
    else{
        for(int i = 1 ; i <= 8 ; ++i){
            b[x] = i ;
            if(!valid(x))continue;
            sol(x+1);
        }
    }
}
int main()
{
    int n = 1;
    while(1){
        min_ans = 8;
        for(int i=1 ; i<=8 ; ++i) b[i]=0;
        for(int i=1 ; i<=8 ; ++i)if(scanf("%d",&a[i])==-1)return 0;
        sol(1);
        printf("Case %d: %d\n",n++,min_ans);
    }
    return 0;
}
