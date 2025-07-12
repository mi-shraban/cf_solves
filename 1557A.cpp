/*
Problem Link: https://codeforces.com/problemset/problem/1557/A
Solve Link: https://codeforces.com/contest/1557/submission/125457184
*/

#include<bits/stdc++.h>
 
#define int long double
 
using namespace std;
 
int32_t main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int32_t t;
	cin>>t;
	
	while(t--)
	{
		int32_t n;
		cin>>n;
		
		int a[n], suma=0, mx=-1e9;
		
		for(int32_t i=0; i<n; i++)
		{
			cin>>a[i];
			
			suma+=a[i];
			
			mx=max(mx, a[i]);
		}
			
		int ans=(suma-mx)/(n-1)+mx;
		
		cout<<fixed<<setprecision(10)<<ans<<"\n";
	}
	
	return 0;
}