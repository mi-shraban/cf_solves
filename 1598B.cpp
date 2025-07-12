/*
Problem Link: https://codeforces.com/problemset/problem/1598/B
Solve Link: https://codeforces.com/contest/1598/submission/132500719
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

	int a[n][5];

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<5; j++)
		{
			cin>>a[i][j];
		}
	}

	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			if(i!=j)
			{
				int c1=0, c2=0, c0=0;

				for(int k=0; k<n; k++)
				{
					if(a[k][i]==1)
						c1++;
					if(a[k][j]==1)
						c2++;
					if(a[k][i]==0 and a[k][j]==0)
						c0++;
				}
				if(c1>=n/2 and c2>=n/2 and c0==0)
				{
					cout<<"YES\n";
					return;
				}
			}
		}
	}
	cout<<"NO\n";
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