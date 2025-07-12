/*
Problem Link: https://codeforces.com/problemset/problem/34/B
Solve Link: https://codeforces.com/contest/34/submission/118197419
 */

#include<bits/stdc++.h>
using namespace std;

#define endl '\n';

int main()
{
	unsigned short int m, n;
	cin>>n>>m;
	
	short int a[n];
	unsigned int ans=0;
	
	for(int i=0; i<n; i++)	cin>>a[i];
	
	sort(a, a+n);
	
	for(int i=0; i<m; i++)
	{
		if(a[i]>=0)
			break;
		
		ans+=a[i];
	}
	cout<<-1*ans;
}