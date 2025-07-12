/*
Problem Link: https://codeforces.com/problemset/problem/25/A
Solve Link: https://codeforces.com/contest/25/submission/113082418
 */

#include<bits/stdc++.h>
using namespace std;
int main()
{
	short int n, x=0, y=0;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		if(a[i]%2==0) x++;
		else y++;
	}
	if(x>y)
	{
		for(int i=0; i<n; i++)
		{
			if (a[i]%2!=0)
			{
				cout<<i+1;
				break;
			}
		}
	}
	else
	{
		for(int i=0; i<n; i++)
		{
			if (a[i]%2==0)
			{
				cout<<i+1;
				break;
			}
		}
	}
	return 0;
}