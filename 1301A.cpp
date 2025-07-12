/*
Problem Link: https://codeforces.com/problemset/problem/1301/A
Solve Link: https://codeforces.com/contest/1301/submission/122175269
*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	string a, b, c;
	cin>>a>>b>>c;
	
	int n=a.size();
	
	for(int i=0; i<n; i++)
	{
		if(c[i]!=a[i] and c[i]!=b[i])
		{
			cout<<"NO\n";
			return;
		}
	}	
	cout<<"YES\n";
	return;
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		solve();
	}
	return 0;
}