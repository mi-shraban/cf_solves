/*
Problem Link: https://codeforces.com/problemset/problem/268/A
Solve Link: https://codeforces.com/contest/268/submission/115792709
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	short int i, j, n, color=0;
	cin>>n;
	
	int h[n], a[n];
	
	for( i=0; i<n; i++)
	{
		cin>>h[i]>>a[i];
	}
	
	for( i=0; i<n; i++)
	{
		for( j=0; j<n; j++)
		{
			if(h[i]==a[j])
				color++;
		}
	}
	cout<<color;
}