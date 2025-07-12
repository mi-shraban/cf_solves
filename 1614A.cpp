/*
Problem Link: https://codeforces.com/problemset/problem/1614/A
Solve Link: https://codeforces.com/contest/1614/submission/138097390
*/

#include<bits/stdc++.h>

#define intld long double
#define intll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"

using namespace std;

void solve()
{
	int n, l, r, k;
	cin>>n>>l>>r>>k;

	vector<int> v1(n);
	for(int i=0; i<n; i++)
	{
		cin>>v1[i];
	}

	vector<int> v2;
	for(int i=0; i<n; i++)
	{
		if(l <= v1[i] and v1[i] <= r)
			v2.push_back(v1[i]);
	}
	sort(v2.begin(), v2.end());

	int x=v2.size(), ans=0;
	for(int i=0; i<x; i++)
	{
		if(k >= v2[i])
		{
			k -= v2[i];
			ans++;
		}
	}
	cout<<ans<<endl;
}

int main()
{
	fastio
	
	int t=1;
	cin>>t;
	for(int i=0; i<t; i++)
		solve();
		
	return 0;
}