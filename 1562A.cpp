/*
Problem Link: https://codeforces.com/problemset/problem/1562/A
Solve Link: https://codeforces.com/contest/1562/submission/127203445
*/

/*#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")*/

#include "bits/stdc++.h"
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define int long long
#define ll long long
#define ld long double
#define endl '\n'
#define mod 1000000007
#define pii pair<int,int>
#define vi vector<int> 
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update>
ordered_set; //find_by_order(k)=kth largest,order_of_key()->number of items strictly smaller

void solve(int tc)
{
	int l, r;
	cin>>l>>r;

	if(r<l*2)
		cout<<r-l<<"\n";
	else
		cout<<(r-1)/2<<"\n";
}

int32_t main()
{
	fastio
	
	int T=1;
	cin>>T;
	for(int t=1;t<=T;t++)
		solve(t);
	return 0;
}
//tag and rating