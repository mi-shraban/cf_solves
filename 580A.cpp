/*
Problem Link: https://codeforces.com/problemset/problem/580/A
Solve Link: https://codeforces.com/contest/580/submission/153824494
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

	int ans = 0, tmp =0;
	for(int i=0; i<n-1; i++)
	{
		if(a[i] < a[i+1] or a[i]==a[i+1])
			tmp++;
		else
			tmp = 0;
		
		if (ans < tmp)
			ans = tmp;
	}
	cout<<ans+1<<endl;
}

int main()
{
	fastio
	
	int t=1;
	//cin>>t;
	for(int i=0; i<t; i++)
		solve();
		
	return 0;
}