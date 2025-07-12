/*
Problem Link: https://codeforces.com/problemset/problem/709/A
Solve Link: https://codeforces.com/contest/709/submission/123087908
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, b, d;
	cin>>n>>b>>d;
	
	int a[n], sum=0, ans=0;
	
	for(int i=0; i<n; i++)
		cin>>a[i];
	
	for(int i=0; i<n; i++)
	{
		if(a[i]>b)
			continue;
		
		sum+=a[i];
		
		if(sum>d)
		{
			sum=0;
			ans++;
		}
	}
	
	cout<<ans<<endl;	
}