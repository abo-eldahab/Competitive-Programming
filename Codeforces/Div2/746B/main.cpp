#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l;
    scanf("%d",&l);
    string str;
    cin>>str;
    char s[2000+5];
    int j=0;
    int a=l-1;
    int b=0;
    for(int i=l-1 ; i>=0 ; --i)
        if(j&1){s[b++]=str[i];++j;}
        else {s[a--]=str[i];++j;}
    for(int i=0 ; i<l ; ++i)printf("%c",s[i]);
    return 0;
}
