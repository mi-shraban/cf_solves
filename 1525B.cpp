/*
Problem Link: https://codeforces.com/problemset/problem/1525/B
Solve Link: https://codeforces.com/contest/1525/submission/169974979
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

	vector <int> v(n);
	for(int i=0; i<n; i++)
		cin>>v[i];
	
	int ans = 2;
	if(is_sorted(v.begin(), v.end()))
		ans = 0;
	else if(v[0] == 1 or v[n-1]==n)
		ans = 1;
	else if(v[0] == n and v[n-1]==1)
		ans = 3;	
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