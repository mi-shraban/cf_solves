/*
Problem Link: https://codeforces.com/problemset/problem/1334/B
Solve Link: https://codeforces.com/contest/1334/submission/118294797
*/

#include<bits/stdc++.h>
using namespace std;

void solve()
{
	int n, x, ans=0;
	cin>>n>>x;
	
	int a[n];
	
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
		
	sort(a, a+n);
	
	double avg=0.0, sum=0;
	
	for(int i=n-1; i>=0; i--)
	{
		sum+=a[i];
		avg=sum/(double(n-i));
		
		if(avg>=x)
			ans++;
		else
			break;
	}
	
	cout<<ans<<endl;
}

int main()
{
	unsigned short int t;
	cin>>t;
	
	while(t--)
	{
		solve();
	}
	return 0;
}