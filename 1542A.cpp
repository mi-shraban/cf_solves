/*
Problem Link: https://codeforces.com/problemset/problem/1542/A
Solve Link: https://codeforces.com/contest/1542/submission/121771348
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int n, count=0;
		cin>>n;
		
		for(int i=0; i<n*2; i++)
		{
			int x;
			cin>>x;
			
			if(x%2==0)
				count++;
		}
		
		if(count==n)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
	
	return 0;
}