#include <bits/stdc++.h>
using namespace std;

int a[100000+5];
int n;
int mem[10000][10000];
int sol (int i = 1 , int prev = 0){
    if(i==n)return 0;
    int&ret = mem[i][prev];
    if(~ret)return ret;
    if(a[i] > a[prev])ret = max(sol(i+1 , prev) , sol(i+1 , i)+1);
    else ret = max(ret , sol(i+1 , prev));
    return ret;
}

void print(int i=1 , int prev =0){
    if(i==n)return;
    if(mem[i][prev] == sol(i+1 , prev))print(i+1 , prev);
    else {
        printf("%d\n",a[i]);
        print(i+1 , i);
    }
}


void init(){
    for(int i=0 ;i<10000 ; ++i)
        for(int j=0 ; j<10000 ; ++j)mem[i][j]=-1;
}

int con(char s[]){
    int len = strlen(s);
    int ans=0;
    for(int i=0 ; i<len ; ++i)ans = (ans*10) + (s[i]-'0');
    return ans;
}

int main(){
//    freopen("input.txt" , "r" , stdin);
//    freopen("output.txt" , "w" , stdout);
    int t;
    scanf("%d",&t);
    getchar(); //enter
    getchar(); // line
    char s[100000+5];
    a[0]=-1;
    while(t--){
        init();
        n=1;
        while(gets(s) && s[0]!='\0')a[n++] = con(s);
        printf("Max hits: %d\n",sol());
        print();
        if(t)puts("");
    }
    return 0;
}
