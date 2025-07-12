/*
Problem Link: https://codeforces.com/problemset/problem/1555/A
Solve Link: https://codeforces.com/contest/1555/submission/124427444
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		long long n;
		cin>>n;
		
		long long ans=max(15ll, (n/2 + n%2) * 5);
		
		cout<<ans<<"\n";
	}
	
	return 0;
}