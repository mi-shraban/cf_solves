/*
Problem Link: https://codeforces.com/problemset/problem/1561/A
Solve Link: https://codeforces.com/contest/1561/submission/126942073
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
		int n;
		cin>>n;
		
		vector <int> v(n);
		for(auto& x: v)
			cin>>x;
		
		int ans=0;
		
		while(!is_sorted(v.begin(), v.end()))
		{
			for(int i{ans++ & 1}; i+1<n; i+=2)
			{
				if(v[i]>v[i+1])
					swap(v[i], v[i+1]);
			}
		}
		
		cout<<ans<<"\n";
	}
	
	return 0;
}