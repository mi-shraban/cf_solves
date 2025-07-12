/*
Problem Link: https://codeforces.com/problemset/problem/344/A
Solve Link: https://codeforces.com/contest/344/submission/113606424
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	
	int a[n], c=1;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	
	for(int i=0; i<n-1; i++)
	{
		if(a[i]!=a[i+1])
			c++;
	}
	cout<<c;
	
	return 0;
}