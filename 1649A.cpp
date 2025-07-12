/*
Problem Link: https://codeforces.com/problemset/problem/1649/A
Solve Link: https://codeforces.com/contest/1649/submission/150199444
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

	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	
	int z = 0;
	for(int i=0; i<n; i++)
	{
		if (a[i]==0)
			z++;
	}
	int ans = 0;
	if(z > 0)
	{
		int f0 = 0, f1 = 0;
		for(int i=0; i<n; i++)
		{
			if(a[i] == 0)
			{
				f0 = i;
				break;
			}
		}
		for(int i=n-1; i>0; i--)
		{
			if(a[i] == 0)
			{
				f1 = i;
				break;
			}
		}
		ans = f1-f0+2;
	}
	
	cout<<ans<<endl;
}

int main()
{
	fastio
	
	int t=1;
	cin>>t;
	for(int i=0; i<t; i++)
		solve();
		
	return 0;
}