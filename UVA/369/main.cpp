#include <bits/stdc++.h>
using namespace std;

double solve(int n,int m){
    int x = n-m;
    double res = 1;
    for(int i=2 ; i<=m ; ++i)res *= (n--)/(double)i;
    for(int i=2 ; i<=x ; ++i)res *= (n--)/(double)i;
    return res*2;
}


int main()
{
    freopen("t.txt" , "w" , stdout);
    int n,m;
    while(scanf("%d %d",&n,&m) && (n||m))
        printf("%d things taken %d at a time is %.0lf exactly.\n",n,m,n==m ? 1 : solve(n,m));
    return 0;
}
