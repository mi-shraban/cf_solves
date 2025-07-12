/*
Problem Link: https://codeforces.com/problemset/problem/1335/A
Solve Link: https://codeforces.com/contest/1335/submission/115423260
*/

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

int main()
{
	short int t;
	cin>>t;
	
	while(t--)
	{
		long long n;
		cin>>n;
		
		int ans=ceil((n-1)/2);
		cout<<ans<<endl;
	}
}