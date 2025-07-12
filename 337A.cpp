/*
Problem Link: https://codeforces.com/problemset/problem/337/A
Solve Link: https://codeforces.com/contest/337/submission/113044460
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	short int n, m, ans=0, x ;
	cin>>n>>m;
	int f[m];
	for(int i=0; i<m; i++)
	{
		cin>>f[i];		
	}
	sort(f, f+m);
	
	ans=f[m-1]-f[0];
	
	for(int i=n; i<=m; i++)
	{
		x=f[i-1]-f[i-n];
		x=abs(x);
		ans=min(x,ans);
	}
	cout<<ans<<endl;
	
	return 0;
}