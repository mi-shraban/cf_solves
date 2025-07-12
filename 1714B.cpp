/*
Problem Link: https://codeforces.com/problemset/problem/1714/B
Solve Link: https://codeforces.com/contest/1714/submission/167067627
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

	vector <int> v(n);
	set <int> s;

	for(int i=0; i<n; i++)
		cin>>v[i];
	
	for(int i=n-1; i>-1; --i)
	{
		if(s.find(v[i]) == s.end())
			s.insert(v[i]);
		else
		{
			cout<<i+1<<endl;
			return;
		}
	}
	cout<<0<<endl;		
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