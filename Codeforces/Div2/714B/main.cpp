#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    set<int> S;
    for(int i=0 ; i<n ; ++i){
        int x;
        scanf("%d",&x);
        S.insert(x);
    }
    if(S.size()<3)puts("YES");
    else if(S.size()==3){
        set<int>::iterator it=S.begin();
        int a[3];
        int i=0;
        while(it!=S.end()){
            a[i++] = *it;
            ++it;
        }
        if(a[2]-a[1] == a[1]-a[0])puts("YES");
        else puts("NO");
    }
    else puts("NO");
    return 0;
}
