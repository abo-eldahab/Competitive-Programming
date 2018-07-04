#include <bits/stdc++.h>
using namespace std;

int n,m;
int a[25];
vector<int> v1,v2;
int max_sum;


void sol(int i){
    int sum = 0;
    for(int j=0 ; j<v1.size() ; ++j) sum += v1[j];
    if(sum > max_sum && sum <= n){
        max_sum = sum;
        v2.clear();
        for(int j=0 ; j<v1.size() ; ++j)
            v2.push_back(v1[j]);
    }
    if(i<m){
        v1.push_back(a[i]);
        sol(i+1);
        v1.pop_back();
        sol(i+1);
    }
}

int main()
{
    while(cin>>n>>m){
        max_sum = 0;
        v1.clear();
        for(int i=0 ; i<m ; ++i)scanf("%d",&a[i]);
        sol(0);
        int siz = v2.size();
        for(int i=0 ; i<siz ; ++i)printf("%d ",v2[i]);
        printf("sum:%d\n",max_sum);
    }
    return 0;
}
