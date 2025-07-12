/*
Problem Link: https://codeforces.com/problemset/problem/629/A
Solve Link: https://codeforces.com/contest/629/submission/124433356
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, ans=0;
	vector <string> v;
	string s;

	cin >> n;

	for(int i=1; i<=n; i++) 
	{
		cin>>s;
		v.push_back(s);
	}

	for(int i=0; i<= n-1; i++)
	{
		for(int j=0; j<=n-1; j++)
		{
			if(v[i][j] == 'C')
			{	
				for(int x=j+1; x<=n-1; x++)
					if(v[i][j]==v[i][x])
						ans++;
				
				for(int x=i+1; x<=n-1; x++)
					if(v[i][j]==v[x][j])
						ans++;
			}
		}
	}
	cout<<ans<<"\n";
	
	return 0;
}