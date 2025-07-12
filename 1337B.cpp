/*
Problem Link: https://codeforces.com/problemset/problem/1337/B
Solve Link: https://codeforces.com/contest/1337/submission/119769733
*/

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';
#define long long 'int';

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int x, n, m;
		cin>>x>>n>>m;
		
		while(n-- and x>0 and x/2+10<x)
			x=x/2+10;
	
		if(x<=m*10)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	
	}
	
	return 0;
}