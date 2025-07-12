/*
Problem Link: https://codeforces.com/problemset/problem/1725/A
Solve Link: https://codeforces.com/contest/1725/submission/170864118
*/

#include<bits/stdc++.h>

#define intld long double
#define intll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"

using namespace std;

void solve()
{
	intll n, m;
	cin>>n>>m;

	intll ans = 0;
	if (m == 1)
		ans = n-1;
	else if (n == m)
		ans = (n-1)*m;
	else
		ans = (m-1)*n;

	cout<<ans<<endl;
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