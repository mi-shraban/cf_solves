/*
Problem Link: https://codeforces.com/problemset/problem/499/B
Solve Link: https://codeforces.com/contest/499/submission/124006774
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin>>n>>m;
	
	map <string, string> c;
	
	for(int i=0; i<m; i++)
	{
		string a, b;
		cin>>a>>b;	
		c[a]=b;
	}
	
	for(int i=0; i<n; i++)
	{
		string x;
		cin>>x;
		string y;
		y=c[x];
		
		if(y.size()<x.size())
			cout<<y<<" ";
		else
			cout<<x<<" ";
	}
	
	return 0;
}