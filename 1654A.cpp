/*
Problem Link: https://codeforces.com/problemset/problem/1654/A
Solve Link: https://codeforces.com/contest/1654/submission/150319016
*/

#include<bits/stdc++.h>

#define intld long double
#define intll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"

using namespace std;

void solve()
{
	int n;
	cin>>n;

	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}

	sort(a, a+n, greater<int>());

	int ans = 0;
	for(int i=0; i<2; i++)
	{
		ans += a[i];
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