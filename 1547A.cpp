/*
Problem Link: https://codeforces.com/problemset/problem/1547/A
Solve Link: https://codeforces.com/contest/1547/submission/124494879
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	
	int t;
	cin>>t;
	
	while(t--)
	{
		vector <int> a(2), b(2), f(2);
		cin>>a[0]>>a[1];
		cin>>b[0]>>b[1];
		cin>>f[0]>>f[1];
		
		int ans=abs(a[0]-b[0])+abs(a[1]-b[1]);
		
		if ((a[0]==b[0] and a[0]==f[0] and min(a[1], b[1]) < f[1] and f[1] < max(a[1], b[1])) or 
			(a[1] == b[1] and a[1] == f[1] and min(a[0], b[0]) < f[0] and f[0] < max(a[0], b[0])))
			
			ans+=2;
			
		cout<<ans<<"\n";
	}
	
	return 0;
}