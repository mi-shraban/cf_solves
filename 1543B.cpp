/*
Problem Link: https://codeforces.com/problemset/problem/1543/B
Solve Link: https://codeforces.com/contest/1543/submission/122185563
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		int a[n];
		long long sum=0;
		
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		long long x=sum%n;
		long long ans=x*(n-x);
		
		cout<<ans<<endl;
	}
	
	return 0;
}