/*
Problem Link: https://codeforces.com/problemset/problem/706/B
Solve Link: https://codeforces.com/contest/706/submission/122238156
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int x[n], sumx=0;
	
	for(int i=0; i<n; i++)
		cin>>x[i];
		
	int q;
	cin>>q;
	
	sort(x, x+n);
	
	while(q--)
	{
		int m;
		cin>>m;
		
		int ans=upper_bound(x, x+n, m)-x;
		
		cout<<ans<<endl;
	}
	
	return 0;
}