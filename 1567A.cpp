/*
Problem Link: https://codeforces.com/problemset/problem/1567/A
Solve Link: https://codeforces.com/contest/1567/submission/127980063
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

	for(int i=0; i<n; i++)
	{
		if(s[i]=='U')
			s[i]='D';
		else if(s[i]=='D')
			s[i]='U';
	}
	cout<<s<<"\n";
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