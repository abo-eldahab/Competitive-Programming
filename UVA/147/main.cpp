#include <bits/stdc++.h>
using namespace std;

const int N = 3e5+5, M = 1e7, OO = 0x7f7f7f7f;

int d[] = { 5,10,20,50,100,200,500,1000,2000,5000,10000 };

long long  mem[30005][11];

long long sol(int i, int rem) {
	if (rem == 0)return 1;
	if (rem < 0 || i == 11)return 0;
	long long &ret = mem[rem][i];
	if (mem[rem][i] != -1)return ret;
	return ret = sol(i+1, rem) + sol(i , rem-d[i]);
}
int main() {
	//freopen("in.txt", "r", stdin);
	int a,b;
	while (scanf("%d.%d", &a,&b) && (a||b)) {
		int v=a*100+b;
		memset(mem, -1, sizeof(mem));
		printf("%6.2f%17lld\n", v/100.0 , sol(0, v));
	}
}
