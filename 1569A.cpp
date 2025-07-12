/*
Problem Link: https://codeforces.com/problemset/problem/1569/A
Solve Link: https://codeforces.com/contest/1569/submission/129341413
*/

#include<bits/stdc++.h>

#define intld long double
#define intll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"

using namespace std;

void solve()
{
	int n;
	cin>>n;

	string s;
	cin>>s;

	for(int i=1; i<n; i++)
	{
		if(s[i]!=s[i-1])
		{
			cout<<i<<" "<<i+1<<"\n";
			return;
		}
	}
	cout<<"-1 -1\n";
			
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