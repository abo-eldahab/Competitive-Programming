#include <bits/stdc++.h>
using namespace std;

bool a[26];
bool found[26];
char ch[500000+5];


int main()
{
    int n,m,x;
    scanf("%d %d %d",&n,&m,&x);
    memset(a,0,sizeof(a));
    memset(found,0,sizeof(found));
    char s[35][35];
    for(int i=0 ; i<n ; ++i)scanf("%s",s[i]);
    bool temp = false;
    for(int i=0 ; i<n ; ++i){
        for(int j=0 ; j<m ; ++j){
            if(s[i][j]=='S'){
                temp = true;
                for(int k=0 ; k<n ; ++k){
                    for(int l=0 ; l<m ; ++l)
                        if(s[k][l]!='S' && (i-k)*(i-k) + (j-l)*(j-l) <= x*x )a[s[k][l]-'a'] = true;
                }
            }
            else found[s[i][j]-'a'] = true;
        }
    }
    int q;
    scanf("%d",&q);
    scanf("%s",ch);
    int ans=0;
    //ECreruXmsC
    for(int i=0 ; i<q ; ++i){
        if((ch[i]>='A' && ch[i]<='Z'&& !temp) || (ch[i]>='A' && ch[i]<='Z' && !found[ch[i]-'A']) || (ch[i]>='a' && ch[i]<='z' && !found[ch[i]-'a'])){puts("-1");return 0;}
        else if(ch[i]>='A' && ch[i]<='Z' && !a[ch[i]-'A'])++ans;
    }
    printf("%d\n",ans);
    return 0;
}
