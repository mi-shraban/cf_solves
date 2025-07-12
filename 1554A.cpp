/*
Problem Link: https://codeforces.com/problemset/problem/1554/A
Solve Link: https://codeforces.com/contest/1554/submission/124437247
*/

#include<bits/stdc++.h>

#define int long long

using namespace std;

int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		int a[100001];
		
		for(int i=0; i<n; i++)
			cin>>a[i];
			
		long long ans=0;
		
		for(int i=1; i<n; i++)
			ans=max(ans, a[i]*a[i-1]);
		
		cout<<ans<<"\n";
	}
	
	return 0;
}