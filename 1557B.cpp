/*
Problem Link: https://codeforces.com/problemset/problem/1557/B
Solve Link: https://codeforces.com/contest/1557/submission/125578007
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
#define gap ' '
#define endl '\n'
#define mod 1000000007
#define pii pair<int,int>
#define vi vector<int> 
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update>
ordered_set; //find_by_order(k)=kth largest,order_of_key()->number of items strictly smaller

void solve(int tc)
{
	int k, n;
	cin>>n>>k;

	vector <pair<int, int>> v(n);

	for(int i=0; i<n; i++)
	{
		cin>>v[i].first;
		v[i].second = i;
	}
	sort(v.begin(), v.end());

	int ans=1;

	for(int i=1; i<n; i++)
	{
		if(v[i-1].second+1!=v[i].second)
			ans++;
	}
	if(ans>k)
		cout<<"NO\n";
	else
		cout<<"YES\n";
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