/*
Problem Link: https://codeforces.com/problemset/problem/358/A
Solve Link: https://codeforces.com/contest/358/submission/113362714
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i, j, n;
	cin>>n;
	int a[1001];
	
	for(i=0; i<n; i++)
	{
		cin>>a[i];	
	}
	
	if(n<=2)
	{
		cout<<"no";
		return 0;
	}
			
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-1; j++)
		{
			int x = min(a[i], a[i+1]);
			int x1 = max(a[i], a[i+1]);
			int y = min(a[j], a[j+1]);
			int y1 = max(a[j], a[j+1]);
			
			if	((x<y and y<x1 and x1<y1) or (y<x and x<y1 and y1<x1))
				{
					cout<<"yes";
					return 0;
				}
		}
	}
	cout<<"no";
	
	return 0;
}