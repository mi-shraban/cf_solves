/*
Problem Link: https://codeforces.com/problemset/problem/1566/A
Solve Link: https://codeforces.com/contest/1566/submission/128707349
*/

#include<bits/stdc++.h>

#define intld long double
#define intll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"

using namespace std;

void solve()
{
	int n, s;
	cin>>n>>s;

	cout<<s/(n-(n-1)/2)<<"\n";
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