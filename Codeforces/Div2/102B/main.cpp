#include <bits/stdc++.h>
using namespace std;

int a[10];

int main()
{
    string str;
    cin>>str;
    int l = str.length();
    for(int i=0 ; i<l ; ++i)++a[str[i]-'0'];
    if(l==1)puts("0");
    else {
        int no=0;
        int ans = 1 ;
        for(int i=0 ; i<10 ; ++i)no += a[i]*i;
        while(no>9){
            int no1=0;
            while(no){
                no1+=no%10;
                no/=10;
            }
            no = no1;
            ++ans;
        }
        printf("%d\n",ans);
    }
    return 0;
}
