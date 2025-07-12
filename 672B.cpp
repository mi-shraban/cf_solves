/*
Problem Link: https://codeforces.com/problemset/problem/672/B
Solve Link: https://codeforces.com/contest/672/submission/114787932
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n; 
	
	string s;
	cin>>s;
	
	set<char> c;
		
	for(int i=0; i<n; i++)
	{
		c.insert(s[i]);
	}
	
	int a, x;
	
	x=26-c.size();
	
	a=n-c.size();
	
	if(x<a)
		cout<<"-1";
	else
		cout<<a;
		
	return 0;
}