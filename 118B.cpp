/*
Problem Link: https://codeforces.com/problemset/problem/118/B
Solve Link: https://codeforces.com/contest/118/submission/134176213
*/

#include<bits/stdc++.h>

#define intld long double
#define intll long long
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"

using namespace std;

void solve()
{
	int n;
	cin>>n;
	
	for(int i=0; i<=n; i++)
	{
		for(int j=n-1; j>=i; j--)
			cout<<"  ";
			
		for(int j=0; j<=i; j++)
		{
			cout<<j;
			if(j!=i)
			cout<<" "; 
		}
		
		for(int j=i-1; j>=0; j--)
		{
			if(j!=i)
			cout<<" ";
			cout<<j;
		}
		
		cout<<endl;	
	}
	
	for(int i=n-1; i>=0; i--)
	{
		for(int j=i; j<=n-1; j++)
			cout<<"  ";
			
		for(int j=0; j<=i; j++)
		{
			cout<<j;
			if(j!=i)
			cout<<" ";
		}
			
		for(int j=i-1; j>=0; j--)
		{
			cout<<" ";
			cout<<j;
		}
		
		cout<<endl;
	}
}

int main()
{
	fastio
	
	int t=1;
	//cin>>t;
	for(int i=0; i<t; i++)
		solve();
		
	return 0;
}