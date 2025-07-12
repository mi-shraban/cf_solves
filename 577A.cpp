/*
Problem Link: https://codeforces.com/problemset/problem/577/A
Solve Link: https://codeforces.com/contest/577/submission/117442346
*/

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

int main()
{
	int n, x, ans=0;
	cin>>n>>x;

	for(int i=1; i<=n; i++)
	{
		if(x%i==0 and x/i<=n)
			ans++;
	}
	cout<<ans<<endl;
	
	return 0;
}