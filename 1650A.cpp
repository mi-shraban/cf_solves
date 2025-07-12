/*
Problem Link: https://codeforces.com/problemset/problem/1650/A
Solve Link: https://codeforces.com/contest/1650/submission/149530832
*/

#include<bits/stdc++.h>

#define intld long double
#define intll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"

using namespace std;

void solve()
{
	string s, c;
	cin>>s>>c;

	int n = s.size();
	int count = 0;

	for(int i=0; i<n; i+=2)
	{
		if(c[0] == s[i])
			count++;
	}
	if(count> 0)
		cout<<"YES\n";
	else
		cout<<"NO\n";
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