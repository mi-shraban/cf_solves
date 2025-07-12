/*
Problem Link: https://codeforces.com/problemset/problem/408/A
Solve Link: https://codeforces.com/contest/408/submission/114245784
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	for(int i=0; i<n; i++)
	{
		int ans=0;
		for(int j=0; j<a[i]; j++)
		{
			int x;
			cin>>x;
			ans+=15+(x*5);
		}
		a[i]=ans;
	}
	
	sort(a, a+n);
	cout<<a[0];

	return 0;
}