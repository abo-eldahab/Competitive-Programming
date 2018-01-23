#include <bits/stdc++.h>
using namespace std;

vector<int>v;

int main()
{
    int n,m,k,t;
    scanf("%d %d %d %d",&n,&m,&k,&t);
    string s[]={"Grapes" , "Carrots" , "Kiwis"};
    while(k--){
        int i,j;
        scanf("%d %d",&i,&j);
        v.push_back((i-1)*m + j);
    }
    sort(v.begin() , v.end());
    int siz = v.size();
    while(t--){
        int i,j;
        scanf("%d %d",&i,&j);
        int cell = (i-1)*m+j;
        int stock=0;
          bool f_w=false;
            for(int l=0 ; l<siz ; ++l)if(v[l]<cell)++stock;else if(v[l]==cell){f_w=true;break;}else break;
            if(f_w)  puts("Waste"); else  cout<<s[(cell-stock)%3]<<endl;
    }
    return 0;
}
