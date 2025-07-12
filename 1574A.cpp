/*
Problem Link: https://codeforces.com/problemset/problem/1574/A
Solve Link: https://codeforces.com/contest/1574/submission/130461734
*/

#include<bits/stdc++.h>

#define intld long double
#define intll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"

using namespace std;

void solve()
{
	int n;
	cin>>n;

	for(int i=1; i<=n; i++)
	{
		for(int j=0; j<i; j++)
			cout<<"(";
		for(int j=0; j<i; j++)
			cout<<")";
		for(int j=0; j<n-i; j++)
			cout<<"()";
		
		cout<<endl;	
	}
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