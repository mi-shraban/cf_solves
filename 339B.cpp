/*
Problem Link: https://codeforces.com/problemset/problem/339/B
Solve Link: https://codeforces.com/contest/339/submission/115673838
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, m;
	cin>>n>>m;
	
	int start=1; 
	long long int ans=0;
	
	for(int i=0; i<m; i++)
	{
		int now;
		cin>>now;
		
		if(now>=start)
			ans+=now-start;
		
		else
			ans+=n-(start-now);
		start=now;
	}
	cout<<ans<<endl;
}