/*
Problem Link: https://codeforces.com/problemset/problem/946/A
Solve Link: https://codeforces.com/contest/946/submission/127010599
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int a[n], ans=0;
	
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		
		ans+=abs(a[i]);
	}
	
	cout<<ans<<"\n";
	
	return 0;
}