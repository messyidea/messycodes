/***********************************************\
 |Author: YMC
 |Created Time: 2015/3/15 13:10:23
 |File Name: a.cpp
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
int main() {
	//freopen("input.txt","r",stdin); 
    int n;
    while(scanf("%d",&n) != EOF) {
        if(n % 3 == 0) {
            //cout<<n/3*2<<endl;
            printf("%d\n",n/3*2);
        } else if(n % 3 == 2) {
            //cout<<n/3*2 + 1<<endl;
            printf("%d\n",n/3*2 + 1);
        } else {
            //cout<<n/3*2<<endl;
            printf("%d\n",n/3*2);
        }
    }
	return 0;
}

