#include <bits/stdc++.h>
using namespace std;

int l1,t;
string s1;

int mem[1000+5][1000+5];
int sol(int i, int j){
    if(i==j)  return 1;
    if(i>j)  return 0;
    int& ret=mem[i][j];
    if(~ret)return ret;
    if(s1[i]==s1[j])ret = sol(i+1,j-1)+2;
    else ret = max(sol(i+1,j) , sol(i,j-1));
    return ret;
}


int main()
{
    scanf("%d",&t);
    cin.ignore();
    while(t--){
        memset(mem,-1,sizeof mem);
        //scanf("%s",s1);
        getline(cin,s1);
        l1=s1.length();
        if(l1)printf("%d\n",sol(0,l1-1));
        else puts("0");
    }
    return 0;
}
