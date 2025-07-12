/*
Problem Link: https://codeforces.com/problemset/problem/1657/A
Solve Link: https://codeforces.com/contest/1657/submission/150669359
*/

#include<bits/stdc++.h>

#define intld long double
#define intll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"

using namespace std;

void solve()
{
	int x, y;
	cin>>x>>y;

	int ans = 2;
	int n = x*x+y*y;
	
	int m=0;
	while(m*m < n)
		m++;	
	
	if (m*m == n)
		ans = 1;
	if (x==0 and y==0)
		ans = 0;

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