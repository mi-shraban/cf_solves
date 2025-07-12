/*
Problem Link: https://codeforces.com/problemset/problem/1675/A
Solve Link: https://codeforces.com/contest/1675/submission/156225461
*/

#include<bits/stdc++.h>

#define intld long double
#define intll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"

using namespace std;

void solve()
{
	int a,b,c,x,y;
	cin>>a>>b>>c>>x>>y;

	int ax = (x-min(x, a));
	int by = (y-min(y, b));

	if(c >= ax+by)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
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