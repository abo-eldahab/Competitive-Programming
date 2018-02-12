#include <bits/stdc++.h>
using namespace std;


int main()
{
    //freopen("test.txt" , "w" , stdout);
    int n;
    scanf("%d",&n);
    while(n--){
        char s1[205],s2[205];
        scanf("%s %s",s1,s2);
        int ans[205];
        for(int i=0 ; i<205 ; ++i)ans[i]=0;
        int l1 = strlen(s1);
        int l2 = strlen(s2);
        bool flag = 1;
        for(int i=0 ; i<l1 && i<l2 ; ++i){
            int x = (s1[i]-'0')+(s2[i]-'0')+ans[i];
            if(x<10) {ans[i] = x;flag=1;}
            else {
                ans[i] = x%10;
                ans[i+1] = x/10;
                flag=0;
            }
        }
        if(l1 > l2){
            for(int i=l2 ; i<l1 ; ++i){
                int x = (s1[i]-'0')+ans[i];
                if(x<10) {ans[i] = x;flag=1;}
                else {
                    ans[i] = x%10;
                    ans[i+1] = x/10;
                    flag = 0;
                }
            }
        }
        else if(l2 > l1){
            for(int i=l1 ; i<l2 ; ++i){
                int x = (s2[i]-'0')+ans[i];
                if(x<10) {ans[i] = x;flag = 1;}
                else {
                    ans[i] = x%10;
                    ans[i+1] = x/10;
                    flag = 0;
                }
            }
        }
        bool temp=1;
        if(flag)for(int i=0 ; i<max(l1,l2) ;  ++i)if(temp && ans[i]==0)continue; else {printf("%d",ans[i]);temp=0;}
        else for(int i=0 ; i<max(l1,l2)+1 ; ++i)if(temp && ans[i]==0)continue;else {printf("%d",ans[i]);temp=0;}
        puts("");
    }

    return 0;
}
