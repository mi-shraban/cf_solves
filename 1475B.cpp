/*
Problem Link: https://codeforces.com/problemset/problem/1475/B
Solve Link: https://codeforces.com/contest/1475/submission/122597993
*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n;
	cin>>n;
	
	int c2021 = n%2020;
	int c2020 = (n-c2021) / 2020 - c2021;
	
	if(c2020>=0 and 2020*c2020+2021*c2021==n)
		cout<<"YES\n";
	else
		cout<<"NO\n";
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		solve();
	}
	
	return 0;
}