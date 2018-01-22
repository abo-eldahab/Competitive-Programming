#include <bits/stdc++.h>
using namespace std;


int main()
{
    char ch[4]={'G','B','I','V'};
    int n;
    scanf("%d",&n);
    printf("ROYGBIV");
    for(int i=0 ; i<n-7 ; ++i)printf("%c",ch[i%4]);
    return 0;
}
