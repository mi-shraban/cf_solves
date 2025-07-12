/*
Problem Link: https://codeforces.com/problemset/problem/432/A
Solve Link: https://codeforces.com/contest/432/submission/113369619
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, k, x=0;
	cin>>n>>k;
	
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		if(5-a[i]>=k)
			x++;
	}
	
	cout<<x/3<<endl;

	return 0;
}