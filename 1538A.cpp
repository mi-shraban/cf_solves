/*
Problem Link: https://codeforces.com/problemset/problem/1538/A
Solve Link: https://codeforces.com/contest/1538/submission/125132698
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
		
		int x, a=0, b=0;
		
		for(int i=1; i<n+1; i++)
		{
			cin>>x;
			
			if(x==n)
				a=i;
			if(x==1)
				b=i;				
		}
		int ans;
			
		ans= max(a,b);
		ans= min(ans,n-min(a,b)+1);
		ans= min(ans,min(a,b)+n-max(a,b)+1);
		
		cout<<ans<<"\n";
	}
	return 0;
}