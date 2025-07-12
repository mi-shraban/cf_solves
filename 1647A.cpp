/*
Problem Link: https://codeforces.com/problemset/problem/1647/A
Solve Link: https://codeforces.com/contest/1647/submission/149803261
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

	int x = 0;
	if(n % 3 == 1)
		x = 1;
	else
		x = 2;

	int sum = 0;
	while(sum != n)
	{
		cout<<x;
		sum += x;

		x = 3-x;
	}
	cout<<"\n";
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