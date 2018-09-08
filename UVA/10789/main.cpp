#include <bits/stdc++.h>
using namespace std;

int nu[10],sm[30],ca[30];

bool primes[2010];
void sieve(){
    primes[0] = primes[1] = false;
    for(int i=2 ; i*i<=2001 ; ++i){
        if(primes[i] == true){
            for(int j=i*2 ; j<=2001 ; j+=i)
                primes[j] = false;
        }
    }
}

int main()
{

    int T;
    memset(primes , true , sizeof(primes));
    scanf("%d",&T);
    sieve();
    for(int t=0 ; t<T ; ++t){
        memset(nu,0,sizeof(nu));
        memset(sm,0,sizeof(sm));
        memset(ca,0,sizeof(ca));
        char str[2010];
        scanf("%s",str);
        int len = strlen(str);
        for(int i=0 ; i<len ; ++i){
            if(str[i]>='0' && str[i]<='9')
                ++nu[str[i]-'0'];
            else if(str[i]>='A' && str[i]<='Z')
            ++ca[str[i]-'A'];
            else
            ++sm[str[i]-'a'];
        }
        string ans = "";

        for(int i=0 ; i<10 ; ++i){
            if(primes[nu[i]])ans += (i+'0');
        }
        for(int i=0 ; i<27 ; ++i){
            if(primes[ca[i]])
                ans += (i+'A');
        }
        for(int i=0 ; i<27 ; ++i){
            if(primes[sm[i]])ans += (i+'a');
        }
        printf("Case %d: ",t+1);
        if(ans == "")printf("empty\n");
        else cout<<ans<<endl;;
    }
    return 0;
}


