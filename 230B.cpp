/*
Problem Link: https://codeforces.com/problemset/problem/230/B
Solve Link: https://codeforces.com/contest/230/submission/118532618
*/

/*
2021-06-05 19:30:49.215276
Category: greedy
Rating: 1500
*/
/*
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
*/
#include "bits/stdc++.h"
using namespace std;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define int long long
#define ll long long
#define ld long double
#define gap ' '
#define endl '\n'
#define Mod 1e9+7
/*
20 sqrt(20)=4.123
1*20
2*10
4*5

*/
int isprime(int x) {
    if(x==2) return 1;
    if(x%2==0) return 0;
    
    for(int i=3;i<=sqrtl(x);i+=2)
    if(x%i==0) return 0; // O(sqrt(n))
    
    return 1;
}
const int N=(int)1e6;
bool prime[N+1]; //1 0
void sieve() {
    for(int i=0;i<=N;i++) prime[i]=1;
    
    for(int i=4;i<=N;i+=2) prime[i]=0;
    for(int i=3;i<=N;i+=2) { // i dia katbi
        if(prime[i]==1) {
            for(int j=i*i;j<=N;j+=i)
                prime[j]=0;
        }
    }
}
void solve(int testcase) {
    int n; cin>>n;
    if(n==1) {
        cout<<"NO"<<endl;
        return;
    }
    int x=sqrtl(n);
    if(x*x==n) {
        if(prime[x]==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    } 
    else cout<<"NO"<<endl;
}

int32_t main() {
    sieve(); // O(n loglogn)
    fio
    int T=1;
    cin>>T;
    for(int t=1;t<=T;t++) solve(t);
    return 0;
}