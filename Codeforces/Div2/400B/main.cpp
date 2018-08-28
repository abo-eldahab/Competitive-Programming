#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    set<int>s;
    for(int i=0 ; i<n ; ++i){
        char str[1000+5];
        scanf("%s",str);
        int st , ed;
        for(int j=0 ; j<m ; ++j){
            if(str[j]=='G')st=j;
            else if(str[j]=='S')ed=j;
        }
        s.insert(ed-st);
    }
    set<int>::iterator it=s.begin();
    if(*it<0)puts("-1");
    else printf("%d\n",s.size());
    return 0;
}
