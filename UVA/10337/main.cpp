#include <bits/stdc++.h>
using namespace std;

const int N = 1e7 + 9, M = 1e7, OO = 0x7f7f7f7f;
int mem[10][1005];
int a[10][1005];
int x;

int sol(int i=0 , int d=0){
    if (i>9 || i<0 || d>x)
		return OO;
	if (d == x) {
		if (i== 0)return 0;
		else return OO;
	}
	int &ret = mem[i][d];
	if (~ret)return ret;
	return ret = min(60-a[i][d]+ sol(i+1 , d+1),min(30-a[i][d]+sol(i , d+1),20-a[i][d]+sol(i-1 , d+1)));
}


int main() {
    int t;
	scanf("%d", &t);
	while (t--) {
		memset(mem , -1 , sizeof(mem));
		scanf("%d", &x);
		x /= 100;
		for (int i=9 ; i>=0 ; --i) {
			for (int j=0 ; j<x ; ++j)scanf("%d",&a[i][j]);
		}
		printf("%d\n",sol());
	}

	return 0;
}
