/***********************************************\
 |Author: YMC
 |Created Time: 2014/12/27 19:41:06
 |File Name: 1001.cpp
 |Description: 
\***********************************************/
#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <string>
#include <cstring>
#include <algorithm>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#define L(rt) (rt<<1)
#define R(rt) (rt<<1|1)
#define mset(l,n) memset(l,n,sizeof(l))
#define rep(i,n) for(int i=0;i<n;++i)
#define maxx(a) memset(a, 0x3f, sizeof(a))
#define zero(a) memset(a, 0, sizeof(a))
#define srep(i,n) for(int i = 1;i <= n;i ++)
#define MP make_pair
const int inf=0x3f3f3f3f ;
const double eps=1e-8 ;
const double pi=acos (-1.0);
typedef long long ll;

using namespace std;
bool vis[1005];
int main() {
	//freopen("input.txt","r",stdin); 
    memset(vis,true,sizeof(vis));
    for(int i=2;i<=1000;++i) {
        if(vis[i]) {
            for(int j = i+i;j <= 1000;j += i) 
                vis[j] = false;
        }
    }
    int n;
    int x;
    while(scanf("%d",&n) != EOF) {
        int sum = 0;
        rep(i,n) {
            scanf("%d",&x);
            if(vis[x]) sum += x;
        }
        printf("%d\n",sum);
    }
	return 0;
}

