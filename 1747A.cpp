/*
Problem Link: https://codeforces.com/problemset/problem/1747/A
Solve Link: https://codeforces.com/contest/1747/submission/180871508
*/

#include<bits/stdc++.h>

#define intld long double
#define int long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"

using namespace std;

void solve()
{
	int n;
	cin>>n;

	vector <int> a(n);
	for(int i=0; i<n; i++)
		cin>>a[i];
	
	int ans = 0;
	for(int i=0; i<n; i++)
		ans += a[i];
	
	cout<<abs(ans)<<endl;
}

int32_t main()
{
	fastio
	
	int t=1;
	cin>>t;
	for(int i=0; i<t; i++)
		solve();
		
	return 0;
}
// key func of numerical array, vector, list reverse sorter
bool rev(int a, int b)
{
	return(a > b);
}