/*
Problem Link: https://codeforces.com/problemset/problem/1559/B
Solve Link: https://codeforces.com/contest/1559/submission/126275957
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
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef tree<int,null_type,less<int>,rb_tree_tag,
tree_order_statistics_node_update>
ordered_set; //find_by_order(k)=kth largest,order_of_key()->number of items strictly smaller

void solve(int tc)
{
	int n, count=0;
	cin>>n;

	string s;
	cin>>s;

	for(int i=0; i<n; i++)
		if(s[i]=='?')
			count++;
	
	if(count== n)
	{
		for(int i=0; i<n; i++)
		{
			if(i%2)
				cout<<"B";
			else
				cout<<"R";
		}
		cout<<"\n";
		return;
	}

	int l=0, r=n-1; 

	while(s[l]=='?')
		l++;
	while(s[r]=='?')
		r--;
	
	for(int i=l+1; i<r; i++)
	{
		if(s[i]=='?')
			if(s[i-1]=='R')
				s[i]='B';
			else
				s[i]='R';
	}
	while(l>0)
	{
		if(s[l]=='B')
			s[l-1]='R';
		else
			s[l-1]='B';
		
		l--;
	}
	while(r<n-1)
	{
		if(s[r]=='B')
			s[r+1]='R';
		else
			s[r+1]='B';

		r++;
	}

	cout<<s<<"\n";
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