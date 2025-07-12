/*
Problem Link: https://codeforces.com/problemset/problem/1691/A
Solve Link: https://codeforces.com/contest/1691/submission/160039153
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
		cin>>a[i];

	int odd = 0;
	for(int i=0; i<n; i++)
		if(a[i] % 2 != 0)
			odd++;
	
	int ans = min(odd, n-odd);
	
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