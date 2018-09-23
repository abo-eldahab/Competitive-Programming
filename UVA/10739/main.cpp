#include <bits/stdc++.h>
using namespace std;

char s[1000+5];
int l ;

int mem[1000+5][1000+5];
int sol(int i ,int j){
    if(i>=j)return 0;
    int& ret=mem[i][j];
    if(~ret)return ret;
    if(s[i]==s[j])ret = sol(i+1 , j-1);
    else ret = min(sol(i+1,j) , min(sol(i,j-1) , sol(i+1 , j-1) ))+1;
    return ret;
}

int main()
{
    int T;
    scanf("%d",&T);
    for(int t=1 ; t<=T ; ++t){
        memset(mem , -1 , sizeof(mem));
        scanf("%s",s);
        l=strlen(s);
        printf("Case %d: %d\n",t,sol(0,l-1));
    }
    return 0;
}
