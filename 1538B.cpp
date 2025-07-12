/*
Problem Link: https://codeforces.com/problemset/problem/1538/B
Solve Link: https://codeforces.com/contest/1538/submission/120477276
*/

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

void solve()
{
	int n, k=0;
	cin>>n;

	int a[n], sum=0;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	if(sum%n!=0)
	{
		cout<<"-1"<<endl;
		return;
	}
	
	sum/=n;
	
	for(int i=0; i<n; i++)
	{
		if(sum<a[i])
			k++;
	}
	cout<<k<<endl;
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		solve();
	}
}