/*
Problem Link: https://codeforces.com/problemset/problem/1475/A
Solve Link: https://codeforces.com/contest/1475/submission/116568945
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	short int t;
	cin>>t;
	
	while(t--)
	{
		long long n;
		cin>>n;
		
		if (n & (n-1))
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	
	return 0;
}