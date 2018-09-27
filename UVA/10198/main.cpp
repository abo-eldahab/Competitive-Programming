#include <bits/stdc++.h>
using namespace std;

int n;
string mem[1000+5];

string sum(string a,string b){
    if(a.length() < b.length())swap(a, b);
    for(int i=b.length()-1,j = a.length()-1; i>=0; i--, j--)
        a[j]+=(b[i]-'0');
    for(int i=a.length()-1; i>0; i--){
        if(a[i] > '9'){
            int d = a[i]-'0';
            a[i-1] = ((a[i-1]-'0') + d/10) + '0';
            a[i] = (d%10)+'0';
        }
    }
    if(a[0] > '9'){
        string k;
        k+=a[0];
        a[0] = ((a[0]-'0')%10)+'0';
        k[0] = ((k[0]-'0')/10)+'0';
        a = k+a;
    }
    return a;
}

string sol(int rem){
    if(rem<0)return "0";
    if(!rem)return "1";
    if(mem[rem] != "-1")return mem[rem];
    mem[rem] = "0";
    for(int i=1 ; i<=4 ; ++i) mem[rem] = sum(mem[rem] ,i==4 ? sol(rem-1) : sol(rem-i));
    return mem[rem];
}

int main()
{
    for(int i=0 ; i<1000+5 ; ++i)mem[i]="-1";
    while(scanf("%d",&n)==1)
        cout<<sol(n)<<endl;

    return 0;
}
