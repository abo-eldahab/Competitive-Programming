#include <bits/stdc++.h>
using namespace std;

int a[3];

int main()
{
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    if(s1[1]=='>')++a[s1[0]-'A'];
    else ++a[s1[2]-'A'];

    if(s2[1]=='>')++a[s2[0]-'A'];
    else ++a[s2[2]-'A'];

    if(s3[1]=='>')++a[s3[0]-'A'];
    else ++a[s3[2]-'A'];

    if(a[0] && a[1] && a[2])puts("Impossible");
    else {
        char ans[3];
        for(int i=0 ; i<3 ; ++i)if(a[i]==0)ans[0]=(i+'A');else if(a[i]==1)ans[1] = (i+'A') ; else if(a[i]==2)ans[2]=(i+'A');
        for(int i=0 ; i<3 ; ++i)printf("%c",ans[i]);
    }
    return 0;
}
